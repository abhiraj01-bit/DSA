/*class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        int i=0;
        int j=arr.size()-1;
        sort(arr.begin(),arr.end());
        set<vector<int>>ans;
        while(i<j){
            if(arr[i]+arr[j]==0){
                ans.insert({arr[i],arr[j]});
                i++;
                j--;
            }
            if(arr[i]+arr[j]<0){
                i++;
            }
            if(arr[i]+arr[j]>0){
                j--;
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};*/