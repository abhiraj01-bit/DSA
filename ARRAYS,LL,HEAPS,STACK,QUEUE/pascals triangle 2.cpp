/*class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans;
        for(int i=0;i<=rowIndex;i++){
            vector<int>curr(i+1,1);
            for(int j=1;j<i;j++){
                curr[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(curr);
        }
        vector<int>tt;
        for(int e:ans[rowIndex]){
            tt.push_back(e);
        }
        return tt;
    }
};*/