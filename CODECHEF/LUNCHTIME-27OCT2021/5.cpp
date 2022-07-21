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
    ll N,V,sum=0;
    cin>>N>>V;
    sum=(N-1)*(N)/2;
    // for(ll i=0;i<N;i++)
    // {
    //     sum+=i;
    // }
    cout<<sum<<" ";
    if(V==1)
        cout<<sum<<endl;
    else if(N-V>0)
    {
        ll fuel=0,dist=1,cost=0;
        cost=V-1;
        //dist++;
        // int i;
        // for(i=2;i<N-V;i++)
        // {
        //     dist+=1;
        //     fuel=V;
        //     cost+=i;
        // }
        // if(N-dist<V)
        //     ;//cost+=(N-dist)*i;
        ll temp=N-V;
        cost=cost+((temp)*(temp+1)/2);
        cout<<cost;
        cout<<endl;
    }
    else
    {
        int cost=0;
        cost+=(N-1);
        cout<<cost<<endl;
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