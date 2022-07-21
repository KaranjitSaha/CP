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
    int n,k;
    cin>>n>>k;
    int ar[n],count=0;
    rep(i,0,n)
    {
        cin>>ar[i];
    }
    rep(i,0,n)
    {
        if(ar[i]>=i+1 && ar[i]>0)
        count++;
    }
    cout<<count<<endl;
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