/*class Solution {
  public:
  int solve(int w,vector<int>&v,vector<int>&wt,int i,vector<vector<int>>&dp){
      if(i>=v.size()||w==0){
          return 0;
      }
      if(wt[i]>w){
          return solve(w,v,wt,i+1,dp);
      }
      if(dp[i][w]!=-1){
          return dp[i][w];
      }
      int take=v[i]+solve(w-wt[i],v,wt,i+1,dp);
      int ex=solve(w,v,wt,i+1,dp);
      return dp[i][w]= max(take,ex);
  }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
       int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
        return solve(W,val,wt,0,dp);
    }
};*/