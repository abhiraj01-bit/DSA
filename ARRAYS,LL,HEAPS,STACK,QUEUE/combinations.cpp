/*class Solution {
public:
void solve(vector<int>&n1,vector<vector<int>>&n2,int j,int k,int n){
    if(n1.size()==k){
        n2.push_back(n1);
        return;
    }
    for(int i=j;i<=n;i++){
        n1.push_back(i);
        solve(n1,n2,i+1,k,n);
        n1.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>n1;
        vector<vector<int>>n2;
        solve(n1,n2,1,k,n);
        return n2;
    }
};*/