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
    int n0,m1;
    cin>>n0>>m1;
    if(n0>2*m1)
    {
        cout<<-1;
        return;
    }
    if(m1>2*n0+2)
    {
        cout<<-1;
        return;
    }
    else
    {
        if(m1>=n0)
        {
            while(m1>n0&&n0>0&&m1>0)
            {
                cout<<"110";
                m1=m1-2;
                n0--;
            }
            while(m1==n0 && m1>0)
            {
                cout<<"10";
                m1--;
                n0--;
            }
        }
        while(n0>=m1 && n0-m1<=1&&m1>0&&n0>0)
        {
            cout<<"01";
            n0--;
            m1--;
        }
        if(n0-m1>=2)
            {cout<<"-1";
            return ;
            }
        while(n0>0)
        {
            cout<<"0";
            n0--;
        }
        while(m1>0)
        {
            cout<<"1";
            m1--;
        }
    }
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