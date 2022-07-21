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
    ll n,x;
    vector <ll>array;
    map<ll,vector<ll>>hashmap;
    cin>>n;
    
    rep(i,0,n)
    {
        //cout<<"line 20"<<endl;
        cin>>x;
        hashmap[x].push_back(i);
        //cout<<"line 24"<<endl;
    }
    //cout<<"line 25"<<endl;
    vector<pair<ll,ll>>answer;
    map<ll,vector<ll>>::iterator p=hashmap.begin();
    while(p != hashmap.end())
    {
        ll k=p->first;
        if(hashmap[k].size()==1)
            answer.push_back(make_pair(k,0));
        
        else
        {
            //cout<<"line 36"<<endl;
            set<ll> temp;
            rep(i,1,hashmap[k].size())
            {
                temp.insert(hashmap[k][i]-hashmap[k][i-1]);
            }
            if(temp.size()==1)
                answer.push_back(make_pair(k,*temp.begin()));
        }
        p++;
        //cout<<"line 46"<<endl;
    }
    cout<<answer.size()<<"\n";
    rep(i,0,answer.size())
    {
        cout<<answer[i].first<<" "<<answer[i].second<<"\n";
    }
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}