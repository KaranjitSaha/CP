#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
 
// ll ncr(int n,int r)
// {
//     ll ans=1;
//     for(int i=0; i>=r-1;i++)
//     {
//         ans*=n/r;
//         n--;
//         r--;
//     }
// }
void solve() {
    ll n,Max,Min,maxcount=0,mincount=0;
    cin>>n;
    ll b[n];
    cin>>b[0];
    Max=b[0];
    Min=b[0];
    rep(i,1,n)
    {
        cin>>b[i];
        Max=max(Max,b[i]);
        Min=min(Min,b[i]);
    }
    rep(i,0,n)
    {
        if(b[i]==Max)
            maxcount++;
        if(b[i]==Min)
            mincount++;
    }
    cout<<Max-Min<<" ";
    if(Max==Min)
        cout<<maxcount*(maxcount-1)/2;
    else
    {
        
        cout<<maxcount*mincount<<endl;
    }  
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++) {
    //     solve();
    // }
    solve();
}