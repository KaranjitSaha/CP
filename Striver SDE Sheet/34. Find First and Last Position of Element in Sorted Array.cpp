/* 34. Find First and Last Position of Element in Sorted Array */

class Solution {
public:
    
    int binarySearch(int s,int e,vector<int>& nums,int target,bool isFirst){
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(target==nums[mid]){
                isFirst ? e=mid-1 : s=mid+1;
                ans=mid;
                continue;
            }
            if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res ;
        res.push_back(binarySearch(0,nums.size()-1,nums,target,true));
        res.push_back(binarySearch(0,nums.size()-1,nums,target,false));
        return res;
    }
};