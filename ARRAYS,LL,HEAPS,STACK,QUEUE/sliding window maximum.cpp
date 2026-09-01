/*class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0;
        vector<int> ans;
        multiset<int> st;
        for (int j = 0; j < nums.size(); j++) {
            st.insert(nums[j]);
            if (j - i + 1 == k) {
                ans.push_back(*st.rbegin());
                st.erase(st.find(nums[i]));
                i++;
            }
        }
        return ans;
    }
};*/