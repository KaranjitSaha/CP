#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no_of_test_cases;
    int a,b,c,solved=0;
    cin>> no_of_test_cases;
    for(int i=0;i<no_of_test_cases;i++)
    {
        cin>> a>> b>> c;
        if(a&&b || b&&c|| c&&a)
        {
            solved++;
        }
    }
    cout<<solved<<endl;
    return 0;
}