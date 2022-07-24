/* https://leetcode.com/problems/two-sum/ */

//O(n) solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        vector<int> ans;
        map<int,int>hashmap;
        for(int i=0;i<nums.size();i++){
                hashmap[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            diff=target-nums[i];
            if(i!=hashmap[diff] && hashmap[diff]>0){
                ans.push_back(hashmap[diff]);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
