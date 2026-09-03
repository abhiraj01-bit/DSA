/*class Solution {
public:
    void solve(int index, vector<int>& nums, int count,vector<int>& dp, priority_queue<int, vector<int>, greater<int>>& pq) {
        if (index >= nums.size() - 1) {
            pq.push(count);
            return;
        }
        if (dp[index] <= count) {
            return;
        }

        dp[index] = count;
        for (int j = 1; j <= nums[index]; j++) {
            int next = index + j;

            if (next < nums.size()) {
                solve(next, nums, count + 1, dp, pq);
            }
        }
    }

    int jump(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n, INT_MAX);

        priority_queue<int, vector<int>, greater<int>> pq;

        solve(0, nums, 0, dp, pq);

        return pq.top();
    }
};*/