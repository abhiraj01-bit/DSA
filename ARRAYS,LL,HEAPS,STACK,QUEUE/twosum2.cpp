/*leetcode class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int>ans;
        int i=0;
        int j=n-1;
        while(j>i){
            if(numbers[i]+numbers[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                 break;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
⚡ Key Ideas
Two-pointer technique:

Start with one pointer at the beginning (i) and one at the end (j).

If sum is too small → move i forward.

If sum is too large → move j backward.

If sum matches target → return indices.

Why it works:

Array is sorted, so moving pointers guarantees progress toward the target.

Time complexity: 
𝑂(𝑛)
Space complexity: 
𝑂(1)
.
};*/