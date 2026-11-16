/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        vector<pair<int,int>>vis;
        for(int i=0;i<nums.size();i++){
            vis.push_back({nums[i],i});
        }
        sort(vis.begin(),vis.end());
        int i=0;
        int j=nums.size()-1;
        queue<int>q;
        while(i<j){
            int sum=vis[i].first+vis[j].first;
            if(sum==target){
            ans.push_back(vis[i].second);
            ans.push_back(vis[j].second);
            }
            if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        
        return ans;
    }
};*/