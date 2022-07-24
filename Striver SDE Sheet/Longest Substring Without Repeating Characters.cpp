/* https://leetcode.com/problems/longest-substring-without-repeating-characters/ */


/* METHOD 2 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int ans=0;
        set<int> charSet;
        for(int end=0;end<s.size();end++){
                while(charSet.find(s[end])!=charSet.end()){
                    charSet.erase(s[start]);
                    start++;
                }
                charSet.insert(s[end]);
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};


/* METHOD1 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0,length=0;
        map<char, int>map;
        int ans=0;
        for(int end=0;end<s.size();){
            if(map.find(s[end])!= map.end())
            {
                length=end-start;
                map[s[end]]=end;
                while(start<map[s[end]]){
                    map.erase(map.find(s[start]));
                    start++;
                }
                end++;
            }
            else{
                map[s[end]]=end;
                end++;
            }
            ans=max(ans,end-start);
        }
        
        return ans;
    }
};