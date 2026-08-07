/*class Solution {
public:
void dfs(int x,int y,vector<vector<int>>& grid,vector<vector<bool>>&vis){
   int n=grid.size();
   int m=grid[0].size();
   if(x<0 || x>=n || y<0 || y>=m || vis[x][y] || grid[x][y]==0){
            return;
        }
        vis[x][y]=true;
    dfs(x-1,y,grid,vis);
    dfs(x+1,y,grid,vis);
    dfs(x,y+1,grid,vis);
    dfs(x,y-1,grid,vis);
    
}
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<m;i++){
            dfs(0,i,grid,vis);
            dfs(n-1,i,grid,vis);
        }
        for(int i=0;i<n;i++){
            dfs(i,0,grid,vis);
            dfs(i,m-1,grid,vis);
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&!vis[i][j]){
                    count++;
                }
            }
        }
        return count;
    }
};*/