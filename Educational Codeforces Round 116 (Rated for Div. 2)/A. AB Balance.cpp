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
    string s;
    cin>>s;
    int countab=0,countba=0,index1,index2;
    rep(i,0,s.size()-1)
    {
        if(s[i]=='a' && s[i+1]=='b')
        {
            countab++;
            index1=i;
        }    
        else if(s[i]=='b' && s[i+1]=='a')
        {
            countba++;
            index2=i;
        }    
    }
    if(countab==countba)
    {    
        cout<<s<<'\n';
        return;
    }
    if(countab>countba)
    {
    //int i=s.find("ab");
    s[index1]='b';
        }
    else
    {
        //int i=s.find('ba');
        s[index2]='a';
    }
    cout<<s<<'\n';   
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