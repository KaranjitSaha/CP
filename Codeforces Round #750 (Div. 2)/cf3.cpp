#include<bits/stdc++.h>
using namespace std;
int recursive(int l,int r, char str[])
{
 if(l<r)
 {
  if(str[l] == str[r]) return recursive(l+1,r-1,str);
  else 
   {
    return 1+min(recursive(l+1,r,str),recursive(l,r-1,str));
   }  
 }
 // else if(l==r) return -1;
 else return 0;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,different_alphabets=0;
        unordered_map<char,int>hashmap;
        
        cin>>n;
        char word[n];
        for(int j=0;j<n;j++)
        {
            cin>>word[j];
            if(hashmap[word[j]]==0)
            {
                different_alphabets++;
                hashmap[word[j]]++;
            }
            else
                hashmap[word[j]]++;
        }
      //  cout<< different_alphabets;
       if(recursive(0,n-1,word)==different_alphabets)
           cout<<-1<<endl;
       else
        {
            cout<<recursive(0,n-1,word)<<endl;

        }
        //cout<<i;
    }

    // cout << recursive(0,3,"abba") << endl;
}   
    // (int)"123"
    // cout << recursive(0,7,"abcaacab") << endl;
    // if(recursive(0,5,"xyzxyz")==3)
    //     cout << recursive(0,5,"xyzxyz")<< endl;
    
//     for(int i=0;i<t;i++)
//     {
//         int n;
//         char c1,c2;
//         cin>>n;
//         cin>>text;
//         int count=0;
//         for(int j=0;j<n/2;j++)
//         {
//             if(text[j]==text[n-j-1])
//                 continue;
//             else 
//             {
//                 c1=text[j];
//                 c2=text[n-j-1];
//                 int temp=j,count1=0,count2=0;
//                 int k2=n-temp-1;
//                 for(int k=temp;k<n/2;)
//                 {
//                     if(text[k]==text[k2])
//                     {
//                         k++;
//                         k2--;
//                         continue;
//                     }
//                     else if( text[k]==c1)
//                     {
//                         k++;
//                         count1++;
//                     }
//                     else if(text[k2]==c1)
//                     {
//                         k2--;
//                         count1++; 
//                     }   
//                     else if(text[k]==c2)
//                     {
//                         k++;
//                         count2++;
//                     }
//                     else if(text[k2]==c2)
//                     {
//                         k2--;
//                         count2++;
//                     }
//                     else
//                     {
//                         cout<<-1<<"\n";
//                         break;
//                     }
//                 }
//                 if(count1>=count2)
//                 {
//                     cout<<count2<<"\n";
//                     break;
//                 }    
//                 else
//                     {
//                         cout<<count1<<"\n";
//                         break;
//                     }
//             }
//         }
//     }
// }