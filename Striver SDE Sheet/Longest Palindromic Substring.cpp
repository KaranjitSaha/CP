/* https://leetcode.com/problems/longest-palindromic-substring/ */

/* O(n) solution - Manacher's Algorithm 
References - https://www.youtube.com/watch?v=nbTSfrEfo6M , https://en.wikipedia.org/wiki/Longest_palindromic_substring#Manacher's_algorithm (NOBODY EXPECTS THIS FROM YOU IN $% MIN CODING ROUND) */ 






/* O(n2) solution */
class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        int resLength=0;
        for(int i=0;i<s.length();i++){
//             Odd length palindromes centered at i
            int l=i,r=i;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                if(r-l+1>resLength){
                    res=s.substr(l,r-l+1);
                    resLength=r-l+1;
                }
                l-=1;
                r+=1;
            }
        }
        for(int i=0;i<s.length();i++){
//             Even length palindromes centered at i
            int l=i,r=i+1;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                if(r-l+1>resLength){
                    res=s.substr(l,r-l+1);
                    resLength=r-l+1;
                }
                l-=1;
                r+=1;
            }
        }
        return res;
    }
};