/*class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0){
            int i=n%10;
            n/=10;
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        int sz=ans.size();
        return ans[sz-1]*ans[sz-2];
    }
};*/