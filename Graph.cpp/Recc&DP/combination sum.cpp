/*class Solution {
public:
void solve(vector<int>&c,int t,vector<vector<int>>&ans,vector<int>&curr,int i,int sum){
    
        if(sum==t){
            ans.push_back(curr);
            return;
        }
        if(sum>t){
            return;
        }
    if(i>=c.size()){
        return;
    }
    solve(c,t,ans,curr,i+1,sum);
    curr.push_back(c[i]);
    solve(c,t,ans,curr,i,sum+c[i]);
    curr.pop_back();
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        int sum=0;
        solve(candidates,target,ans,curr,0,0);
        return ans;
    }
};*/