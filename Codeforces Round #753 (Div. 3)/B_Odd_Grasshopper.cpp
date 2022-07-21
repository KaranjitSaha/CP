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
    ll x0,n,ans=0;
    cin>>x0>>n;
    if(x0%2==0)
    {
        if(n%4==0)
            ans=x0;
        else if(n%4==1)
            ans=x0-n;
        else if(n%4==2)
            ans=x0+1;
        else
            ans=x0+1+n;
    }
    else
    {
        if(n%4==0)
            ans=x0;
        else if(n%4==1)
            ans=x0+n;
        else if(n%4==2)
            ans=x0-1;
        else
            ans=x0-1-n;
    }
    cout<<ans<<endl;
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