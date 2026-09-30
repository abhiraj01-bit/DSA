/*class Solution {
public:
int solve(int x,int y,vector<vector<int>>& triangle,vector<vector<int>>&dp,int n){
    if(x==n-1){
        return triangle[x][y];
    }
    if(dp[x][y]!=INT_MAX){
        return dp[x][y];
    }
    int mini=triangle[x][y]+min(solve(x+1,y,triangle,dp,n),solve(x+1,y+1,triangle,dp,n));
    return dp[x][y]=mini;
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        return solve(0,0,triangle,dp,n);
    }
};*/