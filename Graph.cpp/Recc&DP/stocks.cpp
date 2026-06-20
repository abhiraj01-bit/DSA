/*class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int curr_min = INT_MAX;
        int p = 0;

        for(int i = 0; i < prices.size(); i++) {

            curr_min = min(curr_min, prices[i]);

            p = max(p, prices[i] - curr_min);
        }

        return p;
    }
};*/