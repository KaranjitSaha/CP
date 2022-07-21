#include <bits/stdc++.h>
#include<string.h>
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
 
int value_of_string(string S,int L,int R)
{
    string temp=S.substr(L,R);
    if(temp=="?")
        return 1;
    else if(temp=="?+?")
        return 2;
    else if(temp=="?-?")
        return 1;
    else
        return value_of_string(S,L+1,R-1);
}
int scan_string(string S,int L,int R)
{
    int temp=0;
    rep(i,L,R)
    {
        if(S[i]='?')
        {
            if(i>=1&&(S[i-1]=='+'))
            {
                temp++; 
            }
            if(i>=1&&S[i-1]=='-')
            {
                ;
            }
            if(S[i-1]='(')
            {
                temp=1;
            }
        }
    }
    return temp;
}

void solve() {
    int Q;
    string S;
    cin>>S>>Q;
    //cout<<"took inputs s and q"<<endl;
    rep(i,0,Q)
    {
        int L,R;
        cin>>L>>R;
        //cout<<"L and R taken"<<endl;
        //cout<<value_of_string(S,L-1,R-1)<<" ";
        cout<<scan_string(S,L-1,R)<<" ";
        //cout<<"for ends"<<endl;
    }
    cout<<"\n";
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