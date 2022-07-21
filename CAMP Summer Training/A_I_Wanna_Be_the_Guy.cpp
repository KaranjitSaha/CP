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
    unordered_map<int,int>hashmap;
    int n,p,q;
    cin>>n>>p;
    int p_array[p];
    rep(i,0,p)
    {
        cin>>p_array[i];
        hashmap[p_array[i]]++;
    }
    cin>>q;
    int q_array[q];
    rep(i,0,q)
    {
        cin>>q_array[i];
        hashmap[q_array[i]]++;
    }
    rep(i,1,n+1)
    {
        if(hashmap[i]==0)
        {
            cout<<"Oh, my keyboard!";
            return;
        }
    }
    cout<<"I become the guy.";
    return;
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