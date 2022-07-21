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
    int V,E;
    cin>>V>>E;
    map<int,int> map;
    rep(i,1,V)
    {
        map[i]=i+1;
        cout<<i<<" "<<i+1<<endl;
        E--;
    }
    int temp=3;
    while(E>0)
    {
        rep(i,1,temp)
        {
            if(map[i]<temp)
            {
                map[i]=temp;
                cout<<i<<" "<<temp<<endl;
                E--;
            }
            if(E==0) break;
        }
        temp++;    
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