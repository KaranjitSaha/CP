#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
 
 
void solve(ll ans[]) {
    ll N,index=0;
    cin>>N;
    rep(i,1,N+1)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    // if(N<19)
    //     rep(i,0,N)
    //     {
    //         cout<<ans<<" ";
    //         ans*=2;
    //     }
    // else
    // {
    //     rep(i,0,19)
    //     {
    //         cout<<ans<<" ";
    //         ans*=2;
    //     }
    //     rep(i,20,N)
    //     {
    //         cout<<1<<" ";
    //     }
    // }
    //cout<<endl;
}
 
//method 1
/*int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    ll ans[(ll)pow(10,5)];
    rep(i,0,pow(10,5))
    {
        ans[i]=i^(i+1);
    }
    for (int t = 1; t <= tc; t++) {
        solve(ans);
    }
}*/

//method2:

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    ll ans[(ll)pow(10,5)];
    int index=2,pw=2;
    int limit=100000;
    ans[1]=1;
    while(index <= limit)
    {
        ans[index]=pw;
        int N=index;
        index++;
        for(int i=1; i<N && index<=limit; i++)
        {
            ans[index]=ans[i];
            index++;
        }
        pw*=2;
    }
    for (int t = 1; t <= tc; t++) {
        solve(ans);
    }
}