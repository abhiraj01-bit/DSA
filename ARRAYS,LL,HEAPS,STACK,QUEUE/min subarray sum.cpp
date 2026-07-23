/*class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int ans=1e9;
        int sum=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            while(sum>=target){
                ans=min(ans,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        if(ans==1e9){
            return 0;
        }
        else{
            return ans;
        }
    }
};*/