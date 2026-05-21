/*leetcode 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size();
        for(auto e:mp){
            if(e.second>n/2){
                return e.first;
            }
        }
        return -1;
    }
};*/