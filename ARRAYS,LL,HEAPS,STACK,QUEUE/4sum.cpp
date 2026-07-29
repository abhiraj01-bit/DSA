/*class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    set<vector<int>>ans;
     for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            int x=j+1;
            int y=nums.size()-1;
            while(x<y){
                long long sum= (long long)nums[i]+nums[j]+nums[x]+nums[y];
                if(sum==target){
                    ans.insert({nums[i],nums[j],nums[x],nums[y]});
                    x++;
                    y--;
                }
                else if(sum<target){
                    x++;
                }
                else{
                    y--;
                }
            }
        }
     }   
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};*/