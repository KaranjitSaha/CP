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