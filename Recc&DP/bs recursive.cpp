/*class Solution {
public:
int bs(vector<int>&nums,int st,int end,int t){
    if(st>end){
        return -1;
    }
     int m=st+(end-st)/2;
    if(nums[m]==t){
        return m;
    }
    else if(nums[m]<t){
       return bs(nums,m+1,end,t);
    }
    else{
        return bs(nums,st,m-1,t);
    }
}
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return bs(nums,0,n-1,target);
    }
};*/