/*class Solution {
public:
int solve(int n,int count,vector<int>&dp){
    if(n<=1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    count+=solve(n-1,count,dp)+solve(n-2,count,dp);
    dp[n]=count;
    return dp[n];
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,0,dp);
    }
};*/