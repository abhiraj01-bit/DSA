/*class Solution {
  public:
  bool solve(vector<int>&arr,int t,int i,int sum,vector<vector<int>>&dp){
      if(i>arr.size()){
          return false;
      }
      if(t==sum){
          return true;
      }
      if(sum>t){
          return false;
      }
      if(dp[i][sum]!=-1){
          return dp[i][sum];
      }
      bool take=solve(arr,t,i+1,sum+arr[i],dp);
      bool ex=solve(arr,t,i+1,sum,dp);
      return dp[i][sum]=take||ex;
  }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        vector<vector<int>>dp(arr.size()+1,vector<int>(sum+1,-1));
        return solve(arr,sum,0,0,dp);
    }
};*/