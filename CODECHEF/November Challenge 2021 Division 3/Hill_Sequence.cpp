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
    int n;
    cin>>n;
    ll temp;
    map<ll,int> map;
    vector<int> unique,duplicate;
    bool flag=false;
    for(ll i=0;i<n;i++) 
    {
        cin>>temp;
        if(map[temp]==0)
        {
            map[temp]++;
            unique.push_back(temp);

        }
        else
        {
            map[temp]++;
            if(map[temp]>2)
            {
                flag=true;   
            }
            duplicate.push_back(temp);
        }
    }
    if(flag)
    {
        cout<<-1<<endl;
        return;
    }
    sort(unique.begin(),unique.end(),greater<ll>());
    sort(duplicate.begin(),duplicate.end());
    if(duplicate.size()>0&&duplicate[duplicate.size()-1]==unique[0])
    {
        cout<<-1<<endl;
        return;
    }
    for(ll i=0;i<duplicate.size();i++)
    {
        cout<<duplicate[i]<<" ";
    }
    for(ll i=0;i<unique.size();i++)
    {
        cout<<unique[i]<<" ";
    }
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