#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

 
void solve(ll* forward,ll* backward) {
    ll s,t;
    cin>>s>>t;
    if(s>t){
        cout<<backward[t-1]-backward[s-1]<<endl;
    }
    else{
        cout<<forward[t-1]-forward[s-1]<<endl;
    }
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tc = 1,size,damage=0;
    cin >>size >>tc;
    ll arr[size];
    rep(i,0,size){
        cin>>arr[i];
    }
    ll forward[size],backward[size];
    rep(i,0,size){
        forward[i]=damage;
        if(arr[i]>arr[i+1]){
            damage+=arr[i]-arr[i+1];
        }
    }
    damage=0;
    for(ll i=size-1;i>=0;i--){
        backward[i]=damage;
        if(arr[i]>arr[i-1]){
            damage+=arr[i]-arr[i-1];
        }
    }
    // rep(i,0,size+1){
    //     cout<<forward[i]<< " ";
    // }
    // cout<<endl;
    // rep(i,0,size+1){
                
    //     cout<<backward[i]<<" ";
    // }
    for (int t = 1; t <= tc; t++) {
        solve(forward,backward);
    }
}