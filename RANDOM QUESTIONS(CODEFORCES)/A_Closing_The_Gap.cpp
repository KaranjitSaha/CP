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
    int n,ai,sum=0;
    cin>>n;
    //vector<int>array;
    for(ll i=0; i<n; i++)
    {
        cin>>ai;
        //array.push_back(ai);
        sum+=ai;
    }
    if(sum%n==0)
        cout<<0<<"\n";
    else
        cout<<1<<"\n";
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}