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
    string input;
    cin>>input;
    map<char,ll>map;
    rep(i,0,input.size())
    {
        map[input[i]]=map[input[i]]+1;
    }
    ll odd_counters = 0;
    //std:: map<std ::string,ll>::iterator itr=map.begin();
    rep(i,0,input.size())
    {
        if(map[input[i]]%2==1)
            odd_counters++;
        //cout<<"djvnd"<<endl;
    }
    if(odd_counters%2==1 || odd_counters==0)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
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