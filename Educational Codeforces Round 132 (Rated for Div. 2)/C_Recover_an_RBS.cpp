#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define rep(i, a, b)  for(ll i=a; i<b ;i++)
#define PI 3.14159265358979323846
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
/* RBS me '(' means bal+1 and ')' means balance-1 and the prefix sum array of every index should be >=0 and prefix[last index]==0 for RBS */ 
/* Here we basically are trying to solve the problem by cancelling each "(" with another ")" */
 
void solve() {
    string s; 
    cin>>s;
    ll balance=0,countQ=0;//countQ=count of question marks
    for(char x:s){
        if(x=='(')
            balance++;
        else if(x==')')
            balance--;
        else if(x=='?')
            countQ++;
        if(countQ+balance==1){/* if countQ+balance=1 => countQ=-balance+1, hence all the ?s except one will be used to eliminate the corresponding "("s or ")"s such that in total the balance =0 and the countQ =1. Now since in this new string the first "?" should be ")" as it cant be the other or else the prefix sum will be negative for that index hence we replace that "?" with "(" and hence countQ=0 and balance =1 */ 
            countQ=0;
            balance=1;
        }
    }
    if(countQ==abs(balance))//abs(balance) since agr balance negative hua toh hrr "?" "(" se replace hoga or agr balance positive hua toh hrr "?" ")" se replace hoga
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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