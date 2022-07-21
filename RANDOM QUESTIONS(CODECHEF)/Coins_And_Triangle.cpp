#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
vector<ll> store;
 
ll binary_search(ll l, ll r,ll key)
{
    if(l<=r)
    {
        ll mid=(l+r)/2;
        if((mid*(mid+1))/2<=key && ((mid+1)*(mid+2))/2 >key)
            return mid;
        else if ((mid*(mid+1))/2<key)
            return binary_search(mid+1, r, key);
        else if ((mid*(mid+1))/2 >key)
            return binary_search(l,mid,key);
    }
    return -1;
} 

void solve() {
    ll N=1,lvl=1;
    store.push_back(0);
    // rep(i,1,pow(10,4)+1)
    // {
    //     if(i>=N*(N+1))
    //     {
    //         lvl++;
    //         store.push_back(lvl);
    //         N=N*(N+1);
            
    //     }
    //     else
    //         store.push_back(lvl);
    // }
    cin>>N;
    cout<<binary_search(0,N,N)<<endl;
    //cout<<store[N]<<endl;
    // rep(i,0,7)
    // {
    //     cout<<store[i];
    // }
    
     
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