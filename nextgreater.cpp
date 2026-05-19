/*leetcode 
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        stack<int>s;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--){
            
            while(!s.empty()&&s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                ans.push_back(mp[nums1[i]]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};*/