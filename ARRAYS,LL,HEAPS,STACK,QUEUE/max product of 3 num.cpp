/*class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums.size();
        return max(nums[s-1]*nums[s-2]*nums[s-3],nums[0]*nums[1]*nums[s-1]);
    }
};*/