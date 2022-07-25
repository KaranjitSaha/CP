/* https://leetcode.com/problems/search-a-2d-matrix-ii/ */

/* METHOD1 - start from either top right corner or from bottom left so that ek iteration me i,j me se ek hi change krna pde.*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=m-1,j=0 ;i>=0 && j<n;){
            if(target==matrix[i][j])
                return true;
            else if(target>matrix[i][j])
                j++;
            else
                i--;
        }
        return false;
    }
};
