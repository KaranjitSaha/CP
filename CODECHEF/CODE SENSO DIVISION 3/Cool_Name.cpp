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
    string word;
    cin>>word;
    int power=0;
    vector<int>temp;
    for(int i=0;i<word.length();i++) 
    {
        temp.push_back((int)word[i]);
    }
    sort(temp.begin(), temp.end());
    for(int i=0;i<temp.size();i++)
    {
        //cout<<temp[i]-96<<endl;
        power+=(i+1)*(temp[i]-96);
    }
    cout<<power<<endl;
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