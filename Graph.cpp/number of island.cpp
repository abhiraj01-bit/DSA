/*class Solution {
  public:
  void dfs(int i,int j,vector<vector<char>>&grid,vector<vector<bool>>&vis,int n,int m){
    if(i<0||i>=n||j<0||j>=m||vis[i][j]==true||grid[i][j]!='L'){
        return;
    }
        vis[i][j]=true;
        dfs(i-1,j,grid,vis,n,m);
        dfs(i+1,j,grid,vis,n,m);
        dfs(i,j+1,grid,vis,n,m);
        dfs(i,j-1,grid,vis,n,m);
        dfs(i-1,j+1,grid,vis,n,m);
        dfs(i+1,j+1,grid,vis,n,m);
        dfs(i+1,j-1,grid,vis,n,m);
        dfs(i-1,j-1,grid,vis,n,m);
   
}
    int countIslands(vector<vector<char>>& grid) {
        // Code here
         int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L'&&!vis[i][j]){
                    dfs(i,j,grid,vis,n,m);
                count++;
                }
            }
        }
        return count;
    }
};*/