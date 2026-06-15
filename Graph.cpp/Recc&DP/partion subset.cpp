/*class Solution {
  public:
  bool check(vector<int>&arr,int index,int currsum,int target,vector<vector<int>>&dp){
     if(index>=arr.size()){
         return false;
     }
     
      if(currsum==target){
          return true;
      }
      if(currsum>target){
          return false;
      }
      if(dp[index][currsum]!=-1){
          return dp[index][currsum];
      }
      bool in=check(arr,index+1,currsum+arr[index],target,dp);
      bool ex=check(arr,index+1,currsum,target,dp);
     dp[index][currsum]= in||ex;
     return dp[index][currsum];
  }
    bool equalPartition(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return check(arr,0,0,target,dp);
        
    }
};*/