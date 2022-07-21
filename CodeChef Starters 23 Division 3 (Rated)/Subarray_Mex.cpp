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
    ll N,K,X,index=0;
    cin>>N>>K>>X;
    if(X>K)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        vector<ll>ans;
        while(index<N)
        {
            for(ll j=0;j<X && index<N; j++)
            {
                ans.push_back(j);
                index++;
            }
            while(index%K!=0 && index<N)
            {
                ans.push_back(X-1);
                index++;
            }
        }
        rep(i,0,ans.size())
            cout<<ans[i]<<" ";
        cout<<endl;
    }
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