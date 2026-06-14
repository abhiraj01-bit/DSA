/*
class Solution {
public:
void sub(vector<int>&nums,vector<vector<int>>&ans,vector<int>&curr,int i){
    if(i==nums.size()){
        ans.push_back(curr);
        return;
    }
    sub(nums,ans,curr,i+1);
    curr.push_back(nums[i]);
    sub(nums,ans,curr,i+1);
    curr.pop_back(); //isko hamesha backtrack ke liye
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr;
        sub(nums,ans,curr,0);
        return ans;
    }
};*/