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
    int N;
    cin>>N;
    int a[N];
    for(int i=0; i<N; i++) 
    {
        cin>>a[i];
    }
//     // for(ll i=0;i<N;i++){
//     // if(i==0)cout<<(a[i]&a[i+1])<<" ";
//     // else if(i==N-1)cout<<(a[i-1]&a[i])<<" ";
//     // else cout<<max((a[i]&a[i+1]),(a[i-1]&a[i]))<<" ";
//     }
//     cout<<endl;
// }
    for(int i=0;i<=N-1;i++)
    {
        int temp1=INT_MIN,temp2=INT_MIN;
        if(i<N-1)
            temp1=a[i]&a[i+1];
        if(i>0)
            temp2=a[i-1]&a[i];
        int ans=max(temp1,temp2);
        cout<<ans<<" ";
    }
    // int ans=a[N-1]&a[N];
    // cout<<ans<<" ";
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