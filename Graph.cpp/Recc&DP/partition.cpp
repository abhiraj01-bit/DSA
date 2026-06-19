/*class Solution {
public:
bool solve(vector<int>&nums,int i,int t,int sum,vector<vector<int>>&dp){
    if(t==sum){
        return true;
    }
    if(i>=nums.size()){
        return false;
    }
    if(sum>t){
        return false;
    }
    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }
    bool take=solve(nums,i+1,t,sum+nums[i],dp);
    bool ex=solve(nums,i+1,t,sum,dp);
    return dp[i][sum]=take||ex;
}
    bool canPartition(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        if(s%2!=0){
            return false;
        }
        int n=nums.size();
        int t=s/2;
        vector<vector<int>>dp(n,vector<int>(t+1,-1));
        return solve(nums,0,s/2,0,dp);
    }
};*/