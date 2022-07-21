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
    cin>>N;
    //vector<ll>ans;
    //ll temp;
    //temp=1;
    cout<<1<<" ";
    for(int i=0; i<N; i++)
    {
        // ll temp=pow(2,i);
        // //ans.push_back(temp);
        // cout<<temp<<" ";
        //temp=temp*2;
        ll temp=(ll)1<<i;
        cout<<temp<<" ";
    }
    // ans.push_back(1);
    // //ans.push_back(pow(2,N-1));
    // //ans.push_back(pow(2,N-2));
    // for(auto i:ans) {cout<<i<<" ";}
    cout<<"\n";
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