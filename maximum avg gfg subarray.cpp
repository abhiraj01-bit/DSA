/*class Solution {
public:
    int findMaxAverage(vector<int>& arr, int k) {
        int i = 0;
        int sum = 0;
        int count = 0;

        int maxSum = INT_MIN;
        int index = 0;

        for (int j = 0; j < arr.size(); j++) {
            sum += arr[j];
            count++;

            while (count >= k) {
                if (sum > maxSum) {
                    maxSum = sum;
                    index = i;
                }

                sum -= arr[i];
                i++;
                count--;
            }
        }

        return index;
    }
};*/