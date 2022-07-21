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
    int N,count_0=0,count_1=0;
    cin>>N;
    char S[N];
    rep(i,0,N){
        cin>>S[i];
        if(S[i]=='0'){
            count_0++;
        }
        else{
            count_1++;
        }
    }
    if(count_0>count_1){
        rep(i,0,count_0){
            cout<<0;
        }
    }
    else{
        rep(i,0,count_1){
            cout<<1;
        }
    }
    cout<<endl;
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