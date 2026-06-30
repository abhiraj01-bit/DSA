/*class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i=0;
        int n=nums.size();
        int j=n-1;
        int op=0;
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j]==k){
                op++;
                i++;
                j--;
            }
            if(nums[i]+nums[j]<k){
                i++;
            }
            if(nums[i]+nums[j]>k){
                j--;
            }
        }
        return op;
    }
};*/