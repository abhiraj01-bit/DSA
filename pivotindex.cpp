/*leetcode
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        int ans;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mp[i]=sum;
        }
        int len=mp.size();
        for(int i=0;i<len;i++){
           if(mp[i-1]==mp[len-1]-mp[i]){
            ans=i;
            break;
           }
           else {
             ans=-1;
           }
        }
        return ans;
    }
};*/