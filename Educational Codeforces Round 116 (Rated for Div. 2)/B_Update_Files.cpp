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
    ll n,k;
    cin>>n>>k;
    ll sum=0,hour=0;
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    ll r=floor(log(k)/log(2))+1;
    ll ans;
    if(n>pow(2,r))
        ans=r+ceil((n-pow(2,r))/k);
    else
        ans=ceil(log(n)/log(2));
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