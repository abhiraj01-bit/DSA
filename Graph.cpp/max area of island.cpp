/*class Solution {
public:
int dfs(int &count,int x,int y,vector<vector<int>>& grid,vector<vector<bool>>&vis){
    vis[x][y]=true;
    count++;
    if(isvalid(x-1,y,grid,vis)){
        dfs(count,x-1,y,grid,vis);
    }
    if(isvalid(x+1,y,grid,vis)){
        dfs(count,x+1,y,grid,vis);
    }
    if(isvalid(x,y+1,grid,vis)){
        dfs(count,x,y+1,grid,vis);
    }
    if(isvalid(x,y-1,grid,vis)){
        dfs(count,x,y-1,grid,vis);
    }
    return count;
}
bool isvalid(int nx,int ny,vector<vector<int>>& grid,vector<vector<bool>>&vis){
    int n= grid.size();
    int m=grid[0].size();
    if(nx<0||nx>=n||ny<0||ny>=m||vis[nx][ny]){
        return false;
    }
    return true;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n= grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    vis[i][j]=true;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&!vis[i][j]){
                    int count=0;
                    dfs(count,i,j,grid,vis);
                    ans=max(count,ans);
                }
            }
        }
        return ans;
    }
};*/