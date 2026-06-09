/*gfg
class Solution {
  public:
  void dfs(vector<vector<char>>& grid,int i,int j,vector<vector<bool>>&vis,int n,int m){
      if(i>=n||i<0||j>=m||j<0||grid[i][j]=='X'||vis[i][j]){
          return;
      }
      vis[i][j]=true;
      dfs(grid,i-1,j,vis,n,m);
      dfs(grid,i+1,j,vis,n,m);
      dfs(grid,i,j+1,vis,n,m);
      dfs(grid,i,j-1,vis,n,m);
  }
    void fill(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            if(!vis[i][0]&&grid[i][0]=='O'){
                dfs(grid,i,0,vis,n,m);
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i][m-1]&&grid[i][m-1]=='O'){
                dfs(grid,i,m-1,vis,n,m);
            }
        }
        for(int j=0;j<m;j++){
            if(!vis[0][j]&&grid[0][j]=='O'){
                dfs(grid,0,j,vis,n,m);
            }
        }
        for(int j=0;j<m;j++){
            if(!vis[n-1][j]&&grid[n-1][j]=='O'){
                dfs(grid,n-1,j,vis,n,m);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]=='O'){
                    grid[i][j]='X';
                }
            }
        }
    }
};*/