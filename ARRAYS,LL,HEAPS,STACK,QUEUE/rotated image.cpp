/*class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>mt;
        for(int i=0;i<n;i++){
            vector<int>m;
            for(int j=n-1;j>=0;j--){
                m.push_back(matrix[j][i]);
            }
            mt.push_back(m);
        }
        matrix=mt;
    }
};*/