/*class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum=0;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            tsum+=nums[i];
        }
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            int rightsum=tsum-leftsum-nums[i];
            if(leftsum==rightsum){
                ans=i;
                break;
            }
            leftsum+=nums[i];
        }
        return ans;
    }
};*/