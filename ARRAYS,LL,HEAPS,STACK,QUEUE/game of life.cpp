/*class Solution {
public:
int countNeighbour(int i, int j, vector<vector<int>>&copy, int n, int m) {
        int count = 0;
        vector<int> dx = {-1,-1,-1,0,0,1,1,1};
        vector<int> dy = {-1,0,1,-1,1,-1,0,1};
        for(int k=0;k<8;k++){
            int ni=i+dx[k], nj=j+dy[k];
            if(ni>=0 && ni<n && nj>=0 && nj<m &&copy[ni][nj]==1){
                count++;
            }
        }
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>copy(board.begin(),board.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ni=countNeighbour(i,j,copy,n,m);
                if(copy[i][j] == 1) {
                    if(ni < 2 || ni > 3) {
                        board[i][j] = 0;
                    }
                }
                else {
                    if(ni == 3) {
                        board[i][j] = 1;
                    }
                }
            }
        }
    }
};*/