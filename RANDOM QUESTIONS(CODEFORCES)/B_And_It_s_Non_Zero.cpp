#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

vector<int>counter(19,0);
vector<vector<int>> matrix(200000);
 
void solve() {
    int l,r;
    cin>>l>>r;
    
    int total_numbers=r-l+1;
    int min=INT_MAX;
    rep(i,0,19)
    {
        int set_bits_at_ith_position=0;
        set_bits_at_ith_position=matrix[r][i]-matrix[l-1][i];
        int min_tmp=total_numbers-set_bits_at_ith_position;
        min=std::min(min_tmp,min);
    }
    cout<<min<<endl;
    
}
 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    
    rep(i,0,19)//0 ka binary is all zeroes
    {
        matrix[0].push_back(0);
    }
    rep(i,1,200001)
    {
        int pos=0;//which position of matrix to fill in
        int temp=i;
        while(temp)
        {
            if(temp&1)
            {
                counter[pos]++;
            }
            temp>>=1;
            pos++;
        }
        rep(j,0,19)
        {
            matrix[i].push_back(counter[j]);
        }
    }
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}