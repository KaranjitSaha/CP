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
    int r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double dist,temp;
    temp=pow(x-x1,2)+pow(y-y1,2);
    dist=pow(temp,0.5);
    //cout<<(int)dist<<endl;
    temp= dist/(2*r);
    int temp2=(int)temp;
    if(temp2==temp)
        cout<<(ll) temp<<endl;
    else
        cout<<temp2+1<<endl;
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