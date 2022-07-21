#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

bool isVowel(char alphabet){
    char vowels[]={'a','e','i','o','u'};
    rep(i,0,5){
        if(alphabet == vowels[i]){
            return true;
        }
    }
    return false;
}
 
void solve() {
    string S;
    int N,counter=0;
    cin>>N;
    cin>>S;
    rep(i,0,N){
        if(isVowel(S[i])){
            counter=0;
        }
        else{
            counter++;
        }
        if(counter>=4){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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