/*class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int time=0;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto[x,y]=q.front();
                 q.pop();
                 for(int j=0;j<4;j++){
                    int nx=x+dx[j];
                    int ny=y+dy[j];
                    if(nx>=0&&nx<n&&ny>=0&&ny<m&&grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        q.push({nx,ny});
                    }
                 }
            }
            if(!q.empty()) time++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
    }
};*/