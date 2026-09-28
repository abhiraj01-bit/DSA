/*class Solution {
public:
void bsl(int s,int e,vector<int>&nums,int target,int &mini){
    if(s>e){
        return;
    }
    int mid=s+(e-s)/2;
    if(nums[mid]==target){
        mini=mid;
        bsl(s,mid-1,nums,target,mini);
    }
    else if(nums[mid]<target){
        bsl(mid+1,e,nums,target,mini);
    }
    else{
        bsl(s,mid-1,nums,target,mini);
    }
}
void bsr(int s,int e,vector<int>&nums,int target,int &maxi){
  if(s>e){
    return;
  }
    int mid=s+(e-s)/2;
    if(nums[mid]==target){
        maxi=mid;
        bsr(mid+1,e,nums,target,maxi);
    }
    else if(nums[mid]<target){
        bsr(mid+1,e,nums,target,maxi);
    }
    else{
        bsr(s,mid-1,nums,target,maxi);
    }
}
void bs(int s,int e,vector<int>&nums,int target,int &mini,int &maxi){
    if(s>e){
        return;
    }
    int mid=s+(e-s)/2;
    if(nums[mid]==target){
        mini=mid;
        maxi=mid;
        bsl(s,mid-1,nums,target,mini);
        bsr(mid+1,e,nums,target,maxi);
        return;
    }
    else if(nums[mid] < target){
    bs(mid+1, e, nums, target, mini, maxi);
}
else{
    bs(s, mid-1, nums, target, mini, maxi);
}
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int mini=-1;
        int maxi=-1;
        bs(0,nums.size()-1,nums,target,mini,maxi);
        vector<int>ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
        
    }
};*/