/*class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        for(int x=0;x<nums.size();x++){
        int i=x+1;
        int j=nums.size()-1;
        while(i<j){
            if(nums[x]+nums[i]+nums[j]==0){
                ans.insert({nums[x], nums[i], nums[j]});
                i++;
                j--;
            }
            else if(nums[x]+nums[i]+nums[j]<0){
                i++;
            }
            else{
                j--;
            }
        }
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};*/