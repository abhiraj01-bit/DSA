/*class Solution {
public:
bool solve(int x,int y,vector<vector<char>>& board,vector<vector<bool>>&vis,string word,int k,int n,int m){
    if(x<0||x>=n||y<0||y>=m||vis[x][y]||board[x][y]!=word[k]){
        return false;
    }
    if(k==word.size()-1){
        return true;
    }
    vis[x][y]=true;
    if(solve(x, y+1, board, vis, word, k+1, n, m)){
        return true;
    }
        if(solve(x+1, y, board, vis, word, k+1, n, m)){
            return true;
        }
        if(solve(x, y-1, board, vis, word, k+1, n, m)){
            return true;
        }
        if(solve(x-1, y, board, vis, word, k+1, n, m)){
            return true;
        }
        vis[x][y]=false;
    return false;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(solve(i, j, board, vis, word, 0, n, m))
                    return true;
            }
        }
        return false;
    }
};*/