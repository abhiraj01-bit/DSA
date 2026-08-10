/*class Solution {
public:
void dfs(int x,int y,vector<vector<char>>& board,vector<vector<bool>>&vis){
    int n=board.size();
    int m=board[0].size();
    if(x<0||x>=n||y<0||y>=m||vis[x][y]||board[x][y]=='X'){
        return;
    }
    vis[x][y]=true;
    dfs(x-1,y,board,vis);
    dfs(x+1,y,board,vis);
    dfs(x,y-1,board,vis);
    dfs(x,y+1,board,vis);
}
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<m;i++){
            dfs(0,i,board,vis);
            dfs(n-1,i,board,vis);
        }
        for(int i=0;i<n;i++){
            dfs(i,0,board,vis);
            dfs(i,m-1,board,vis);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]){
                    board[i][j]='X';
                }
            }
        }
    }
};*/