/*class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>>ans;
      sort(nums.begin(),nums.end());
        int k=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.insert({nums[i],nums[j],nums[k]});
                }
                if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        vector<vector<int>>fans(ans.begin(),ans.end());
        return fans;
    }
};*/