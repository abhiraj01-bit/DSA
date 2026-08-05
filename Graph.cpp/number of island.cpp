/*class Solution {
public:
void dfs(int x,int y,vector<vector<char>>& grid,vector<vector<bool>>&vis){
    vis[x][y]=true;
    if(isvalid(x-1,y,grid,vis)){
        dfs(x-1,y,grid,vis);
    }
    if(isvalid(x+1,y,grid,vis)){
        dfs(x+1,y,grid,vis);
    }
    if(isvalid(x,y+1,grid,vis)){
        dfs(x,y+1,grid,vis);
    }
    if(isvalid(x,y-1,grid,vis)){
        dfs(x,y-1,grid,vis);
    }
}
bool isvalid(int nx,int ny,vector<vector<char>>& grid,vector<vector<bool>>&vis){
    int n=grid.size();
    int m=grid[0].size();
    if(nx<0||nx>=n||ny<0||ny>=m||grid[nx][ny]=='0'||vis[nx][ny]){
        return false;
    }
    return true;
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]=='1'){
                    count++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return count;
    }
};*/