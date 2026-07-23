/*class Solution {
public:
int chori(vector<int>&nums,int index,vector<int>&dp){
    if(index>=nums.size()){
        return 0;
    }
    if(dp[index]!=-1){
        return dp[index];
    }
    int ex=chori(nums,index+1,dp);
    int chhose=nums[index]+chori(nums,index+2,dp);
     dp[index]=max(ex,chhose);
     return dp[index];
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
       return chori(nums,0,dp);
    }
};*/