/*leetcode
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        stack<int>s;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&s.top()<=nums[i]){
                s.pop();
            }
            s.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&s.top()<=nums[i]){
                s.pop();
            }
            if(s.empty()){
                ans.push_back(-1);
            }
            else{

                ans.push_back(s.top());
            }
            s.push(nums[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};*/
/*class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();

        vector<int> nums2(2 * n);

        for(int i = 0; i < n; i++) {
            nums2[i] = nums[i];
            nums2[i + n] = nums[i];
        }
        vector<int> ans2(2 * n, -1);

        stack<int> s;

        for(int i = nums2.size() - 1; i >= 0; i--) {

            if(s.empty()) {
                ans2[i] = -1;
            }
            else {

                while(!s.empty()) {

                    if(s.top() > nums2[i]) {
                        ans2[i] = s.top();
                        break;
                    }

                    s.pop();
                }
                if(s.empty()) {
                    ans2[i] = -1;
                }
            }

            s.push(nums2[i]);
        }
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            ans.push_back(ans2[i]);
        }

        return ans;
    }
};*/