/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size();
        int ans=0;
        for(auto e:mp){
            if(e.second>n/2){
                 ans=e.first;
                 break;
            }
        }
        return ans;
    }
};*/