#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
 
 
void solve() {
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
        cout<<n;
        return;
    }
    else
    {
       int count=1,temp=n,days=1;
       while(temp>0)
       {
           if(count%m==0)
           {
               ;//temp++;
           }
           else
           {
               temp--;
           }
           //days++;
           count++;
       }
    cout<<count-1<<endl;
    }
    
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}