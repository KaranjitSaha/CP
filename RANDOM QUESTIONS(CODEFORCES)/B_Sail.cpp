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
    ll Ncounter=0,Ecounter=0,Wcounter=0,Scounter=0,length,sx,sy,ex,ey;
    cin>>length>>sx>>sy>>ex>>ey;
    ll delx=ex-sx,dely=ey-sy;
    string a;
    cin>>a;
    //cout<<a<<endl;
    rep(i,0,length)
    {
        //cin>>a[length];
        if(a[i]=='N')
            Ncounter++;
        else if(a[i]=='S')
            Scounter++;
        else if(a[i]=='E')
            Ecounter++;
        else
            Wcounter++;
        //cout<<Ncounter<<endl<<Ecounter<<endl;
        if(delx>=0 && delx<=Ecounter)
        {
            //cout<<"first if"<<a[0]<<Ecounter<<endl;
            if(dely>=0 && dely<=Ncounter)
            {    cout<<i+1<<endl;
                return;
            }
            else if(dely<=0 && abs(dely)<=Scounter)
            {    cout<<i+1<<endl;
                return;
            }
        }
        if(delx<=0 && (abs(delx)<=Wcounter))
        {
            if(dely>=0 && dely<=Ncounter)
            {    cout<<i+1<<endl;
                return;
            }
            else if(dely<=0 && abs(dely)<=Scounter)
            {    cout<<i+1<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
    
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}