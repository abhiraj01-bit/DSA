/*class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        long long sum = 0, ans = 0;
        int n = nums.size();
        for (int i = 0, j = 0; j < n; j++) {
            sum += nums[j];
            freq[nums[j]]++;
            if (j - i + 1 > k) {
                sum -= nums[i];
                freq[nums[i]]--;
                if (freq[nums[i]] == 0) freq.erase(nums[i]);
                i++;
            }
            if (j - i + 1 == k && freq.size() == k) {
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};
*/