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
    string keyboard,s;
    cin>>keyboard>>s;
    int ans=0;
    unordered_map<char,int> hashmap;
    
    rep(i,0,keyboard.size())
    {
        if(hashmap[keyboard[i]]==0)
            hashmap[keyboard[i]]=i+1;
    }
    int i;
    rep(i,0,s.size()-1)
    {
        int temp=hashmap[s[i+1]]-hashmap[s[i]];
        if(temp>0)
            ans+=temp;
        else
            ans=ans-temp;
        // cout<<temp<< " ";
    }
    // int temp= hashmap[s[i]]-hashmap[s[i-1]];
    // cout<<temp<<" ";
    // if(temp>0)
    //     ans+=temp;
    // else
    //     ans-=temp;
    cout<<ans<<endl;
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