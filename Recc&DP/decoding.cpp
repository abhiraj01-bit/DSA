/*class Solution {
public:
int ways(string&s,int n,int index,vector<int>&dp){
    if(index==n){
        return 1;
    }
    if(s[index]=='0'){
        return 0;
    }
    if(dp[index]!=-1){
        return dp[index];
    }
    int first=ways(s,n,index+1,dp);
    int second=0;
    if(index+1<n&&(s[index]=='1'||s[index]=='2'&&s[index+1]<='6')){
         second=ways(s,n,index+2,dp);
    }
    dp[index]= first+second;
    return dp[index];
}
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        return ways(s,n,0,dp);
    }
};*/