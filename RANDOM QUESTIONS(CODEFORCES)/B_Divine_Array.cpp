#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

/*
    LOGIC:- main logic yeh hai ki array infinite times edit nhi hoga woh at max n times hi update hoga.tie(0); for e.g. maanlo
    original array :- 2  1 1 4 3 1 2
    yaha in step 1 2-> 2; 1-> 3;4->1; 3-> 1 final array: 2 3 3 1 1 3 2
    in step 2 2->2; 3->3;1->2 final array: 2 3 3 2 2 3 2
    in step 3 2->4; 3->3 final array: 4 3 3 4 4 3 4 
    in step 4 4->4 and 3->3 final array : 4 3 3 4 4 3 4 
    now in all further steps yahi rhega. so main baat yeh hai ki apn at max n times hi edit krte rhenge array ko
    like hrr ek step me ek replacement km ho rha hai.  

*/
 
void solve() {
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    int storage[n+1][n];// to store all modified arrays till nth step or till they becme constant
    for(int i=0;i<n;i++)
    {
        storage[0][i]=ar[i];//pehli baar me kch nhi hoga
    }
    for(int i=1;i<=n;i++)
    {
        unordered_map<int,int> map;//hrr nyi  array ke liye nya hashmap bnega
        for(int j=0;j<n;j++)
        {
            map[ar[j]]++;
        }
        for(int k=0;k<n;k++)//elements edit krke storage chnge krte rho
        {
            ar[k]=map[ar[k]];
            storage[i][k]=ar[k];
        }
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int xi,ki;
        cin>>xi>>ki;
        if(ki<=n)
        {
            cout<<storage[ki][xi-1]<<"\n";//xi-1 kyuki 1 based indexing hai
        }
        else
            cout<<storage[n][xi-1]<<"\n";
    }
    
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc ;//= 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}