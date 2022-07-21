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
    ll x,y;
    cin>>x>>y;
    // if(x>=0&&y>=0&&x%2==0 && y%2==0&&x<=pow(10,8)&&y<=pow(10,8))
    //     cout<<"YES";
    // else if(x%2==0&&y%2==1&& x>=0&&y>=0&& x<=pow(10,8)&&y<=pow(10,8))
    //     cout<<"YES";
    if(x%2==0&&x>0) 
        cout<<"YES";
    else if(x==0 && y%2==0)
        cout<<"YES";
    else
        cout<<"NO";
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