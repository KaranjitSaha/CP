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
    int N;
    ll x,y;
    cin>>N;
    vector<pair<ll,ll>>xiyi;
    vector<pair<ll,ll>>delxdely;
    for(ll i=0; i<N; i++)
    {
        cin>>x>>y;
        xiyi[i].first=x;
        xiyi[i].second=y;
    }
    for(auto i:xiyi) 
    {
        for(auto j:xiyi)
        {
            if(i.first-j.first!=0)
                delxdely.push_back(abs(i.first-j.first));
        }
    }
    for(auto i:yi) 
    {
        for(auto j:yi)
        {
            if(i-j!=0)
                dely.push_back(abs(i-j));
        }
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