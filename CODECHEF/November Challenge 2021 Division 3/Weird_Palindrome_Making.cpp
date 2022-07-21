//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
 
 
void solve() {
    int n,count_odd=0;
    cin>>n;
    ll a[n];
    //rep(i,0,n)
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==1)
            count_odd++;
    }
    if(count_odd>1 && count_odd%2==1)
    {
        cout<<(int)(count_odd-1)/2<<"\n";
    }
    else if(count_odd>1 && count_odd%2==0)
    {
        cout<<count_odd/2<<"\n";
    }
    else
    {
        cout<<0<<"\n";
    }

}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}