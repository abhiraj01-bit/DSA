/*class Solution {
public:
int solve(int n,int m,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp){
   if(n<0||m<0){
        return 0;
    }
    if(obstacleGrid[n][m]==1){
        return 0;
    }
    if(n==0&&m==0){
        return 1;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }
    int up=solve(n,m-1,obstacleGrid,dp);
    int left=solve(n-1,m,obstacleGrid,dp);
   dp[n][m]=up+left;
   return dp[n][m];
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(n-1,m-1,obstacleGrid,dp);
    }
};*/