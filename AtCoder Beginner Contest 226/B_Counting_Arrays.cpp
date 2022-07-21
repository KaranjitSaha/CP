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
    int L,N,count=0;
    cin>>N;
    // bool flag = false;
    // ll a[N][2*(int)pow(10,5)];
    // for(ll i=0; i<N;i++) 
    // {
    //     cin>>L;
    //     a[i][0]=L;
    //     for(int j=1;j<=L;j++)
    //     cin>>a[i][j];   
    // }
    // for(int i=0;i<N;i++)
    // {
    //     for(int j=i+1;j<N;j++)
    //     {
    //         if(a[i][0]!=a[j][0])
    //             continue;
    //         else
    //         {
    //             for(int k=1;k<=a[i][0];k++)
    //             {
    //                 if(a[i][k]!=a[j][k])
    //                 {
    //                     flag=false;
    //                     break;
    //                 }
    //                 else
    //                 {
    //                     flag=true;   
    //                 }
    //             }
    //         }
    //     }
    //     if(flag)
    //         count++;
    // }
    // if(count ==0)
    //     count=1;
    unordered_map<int,vector<string>> hashmap;
    vector<int>temp;
    for(int i=0;i<N;i++)
    {
        cin>>L;
        temp.push_back(L);
        getline(cin,hashmap[L][temp.size()]);
    }
    for(auto L:temp)
    {
        for(auto i : hashmap[L])
        {
            for(auto j:hashmap[L])
            {
                //if(i-hashmap[L].begin()==j-hashmap[L].begin)
                //    continue;
                if(i==j)
                    count++;
                
            }
        }
    }
    if(N==1)
        count=1;
    cout<<count;

    // a.push_back(L);
    // for(int i=1; i<=L;i++) 
    // {
    //     cin>>a[i];
    // }

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