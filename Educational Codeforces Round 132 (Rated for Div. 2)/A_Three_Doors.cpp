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
    int x,a,b,c,keys[3];
    unordered_map<int, int> hashmap;
    cin>>x;
    rep(i,0,3){
        cin>>keys[i];
        hashmap[i+1]=keys[i];
    }
    rep(i,0,2){
        if(hashmap[x]>0){
            x=hashmap[x];
        }
        else if (hashmap[x]==0){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    return;
    
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