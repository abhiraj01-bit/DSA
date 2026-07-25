/*class Solution {
public:
    bool judgeSquareSum(int c) {
        int n = sqrt(c);
        vector<int> nums(n + 1);
        for (int i = 0; i <= n; i++) {
            nums[i] = i;
        }
        int i = 0;
        int j = n;
        while (i <= j) {
            long long sum = 1LL * nums[i] * nums[i] + 1LL * nums[j] * nums[j];
            if (sum == c)
                return true;
            if (sum < c)
                i++;
            else
                j--;
        }
        return false;
    }
};*/