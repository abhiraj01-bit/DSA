/*leetcode 
class Solution {
public:
    bool solve(int i, vector<int>& nums, int n,vector<int>&dp) {

        if(i >= n) {
            return true;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        for(int j = 1; j <= nums[i]; j++) {

            if(solve(i + j, nums, n,dp)) {
               return dp[i]=1;
            }
        }

        return dp[i]=0;
    }

    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n-1,-1);
        return solve(0, nums, nums.size() - 1,dp);
    }
};*/