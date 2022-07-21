#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    //long s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count0=0,count1=0;
        cin>>n;
        long long int a[n],k=1;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]==0)
                //count0++;
                k*=2;
            if(a[j]==1)
                count1++;
        }
        if(count1>0)
        {
            cout<<k*count1<<"\n";//(count1*(pow(2,count0)-1))+count1<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}