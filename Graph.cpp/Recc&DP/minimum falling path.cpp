/*class Solution {
public:
int solve(int n,int m,vector<vector<int>>&matrix,vector<vector<int>>&dp){
    if(m<0||m>=matrix[0].size()){
        return 1e9;
    }
    if(n==0){
        return matrix[0][m];
    }
    if(dp[n][m]!=1e9){
        return dp[n][m];
    }
    int up=solve(n-1,m,matrix,dp);
    int left=solve(n-1,m-1,matrix,dp);
    int right=solve(n-1,m+1,matrix,dp);
    dp[n][m]= matrix[n][m]+min(up,min(left,right));
    return dp[n][m];
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,1e9));
        int ans=1e9;
        for(int j=0;j<m;j++){
            ans=min(ans,solve(n-1,j,matrix,dp));
        }
        return ans;
    }
};*/