/* https://leetcode.com/problems/string-to-integer-atoi/ */

class Solution {
public:
    long long int myAtoi(string s) {
        vector<int> temp;
        bool sign=true;//true if positive false if negative
        int j=0;
        while(s[j]==' '){
            s[j]=0;
            j++;
        }
        if(s[j]=='-'){
           sign=false;
            j++;
        }
        else if(s[j]=='+'){
            j++;
        }
        while(j<s.size() && s[j]=='0'){
            j++;
        }
        for(int i=j;i<s.length();i++){
            int digit=(int)s[i];
            if(digit>=48 && digit<=57)
                temp.push_back(digit-48);
            else
                break;
            if(temp.size()>10)
                break;
        }
        long long int result=0;
        for(int i=0;i<temp.size();i++){
            if(sign)
                try{
                    result+=temp[i]*pow(10,temp.size()-1-i);
                }catch(int result){
                    if(result>=pow(2,31)-1){
                result=pow(2,31)-1;
                break;
            }
                }
            else
                result-=temp[i]*pow(10,temp.size()-1-i);
            if(result>=pow(2,31)-1){
                result=pow(2,31)-1;
                break;
            }
            if(result<=-1*pow(2,31)){
                result=-1*pow(2,31);
                break;
            }
        }
        return result;
    }
};