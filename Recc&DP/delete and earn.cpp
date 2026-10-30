/*
leetcode
class Solution {
public:
int solve(int i,vector<int>&ans,vector<int>&dp){
    if(i>=ans.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int inc=ans[i]+solve(i+2,ans,dp);
    int exc=solve(i+1,ans,dp);
    dp[i]=max(inc,exc);
    return dp[i];
}
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            mp[nums[i]]++;
        }
        vector<int>ans(maxi+1,0);
        for(int i=0;i<=maxi;i++){
            if(mp.find(i)!=mp.end()){
                ans[i]=mp[i]*i;
            }
        }
        vector<int>dp(maxi+2,-1);
        int haha=0;
        for(int i=0;i<=maxi;i++){
            haha=max(haha,solve(i,ans,dp));
        }
        return haha;
    }
};*/