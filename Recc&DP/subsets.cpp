/*
class Solution {
  public:
void solve(vector<int>&arr,vector<vector<int>>&ans,vector<int>&curr,int i){
    if(i==arr.size()){
        ans.push_back(curr);
        return;
    }
    solve(arr,ans,curr,i+1);
    curr.push_back(arr[i]);
    solve(arr,ans,curr,i+1);
    curr.pop_back();
}
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
        vector<int>curr;
        solve(arr,ans,curr,0);
        return ans;
    }
};
};*/