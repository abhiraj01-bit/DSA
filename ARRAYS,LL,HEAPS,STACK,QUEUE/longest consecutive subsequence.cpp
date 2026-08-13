/*class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> mp;

        for(int x : nums) {
            mp[x] = 1;
        }

        int ans = 0;
        int curr = 0;
        int prev = INT_MIN;

        for(auto &p : mp) {
            int x = p.first;

            if(prev != INT_MIN && x == prev + 1) {
                curr++;
            }
            else {
                curr = 1;
            }

            ans = max(ans, curr);
            prev = x;
        }

        return ans;
    }
};*/