/*class Solution {
public:
int solve(string&a,string &b,int i,int j,vector<vector<int>>&dp){
    if(i>=a.size()){
        return 0;
    }
    if(j>=b.size()){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(a[i]==b[j]){
        return 1+solve(a,b,i+1,j+1,dp);
    }
    return dp[i][j]= max(solve(a,b,i,j+1,dp),solve(a,b,i+1,j,dp));
}
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
         int l=solve(word1,word2,0,0,dp);
         return abs((n-l))+abs((m-l));
    }
};*/