/*class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        for(int i=0;i<image.size();i++){
            vector<int>curr;
            for(int j=image.size()-1;j>=0;j--){
                curr.push_back(image[i][j]);
            }
            ans.push_back(curr);
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image.size();j++){
                if(ans[i][j]==1){
                    ans[i][j]=0;
                }
                else{
                    ans[i][j]=1;
                }
            }
        }
        return ans;
    }
};*/