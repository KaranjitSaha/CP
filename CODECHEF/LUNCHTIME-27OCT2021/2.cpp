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
    ll a,b,p,q;
    cin>>a>>b>>p>>q;
    int temp1,temp2;
    temp1=p/a;
    temp2=q/b;
    // if(temp1==(int)temp1 &&temp2==(int)temp2 && (temp1-temp2==1 ||temp1-temp2==0 ||temp1-temp2==-1))
    //     cout<<"YES"<<endl;
    //if(temp1!=(int)temp1 &&temp2!=(int)temp2)
    if(!(p%a==0 && q%b==0))
        cout<<"NO"<<endl;
    else if(temp1==temp2)
        cout<<"YES"<<endl;
    else if(temp1-temp2==1||temp2-temp1==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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