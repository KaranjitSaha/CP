#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        //bool flag = false;
        if(c%2==0)
            c=0;
        else
            c=1;
        if(a%2==0)
            a=0;
        else
            a=1;
        if(b%2==0)
            b=0;
        else b=1;

        if((a&&b&&c)|| (!a&&!b&&!c) || (!a&&b&&!c) || (a&&!b&&c))
        {
            cout<<0<<endl;
        }
        else
            cout<<1<<endl;
    }
    return 0;
}