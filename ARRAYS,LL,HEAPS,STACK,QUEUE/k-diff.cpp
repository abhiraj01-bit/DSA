/*class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int ans = 0;
        if(k == 0) {
            for(auto it : mp) {
                if(it.second >= 2) {
                    ans++;
                }
            }
            return ans;
        }
        for(auto it : mp) {
            int n = it.first + k;

            if(mp.find(n) != mp.end()) {
                ans++;
            }
        }

        return ans;
    }
};*/