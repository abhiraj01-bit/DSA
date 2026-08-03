/*class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0] == 1 || grid[n-1][m-1] == 1){
            return -1;
        }
        int dx[]={1,1,0,-1,-1,-1,0,1};
        int dy[]={0,-1,-1,-1,0,1,1,1};
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        int dist=1;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto [x,y]=q.front();
                if(x==n-1&&y==m-1){
                    return dist;
                }
                q.pop();
                for(int j=0;j<8;j++){
                    int nx=x+dx[j];
                    int ny=y+dy[j];
                    if(nx>=0&&nx<n&&ny>=0&&ny<m&&grid[nx][ny]==0){
                        grid[nx][ny]=1;
                        q.push({nx,ny});
                    }
                }
            }
            if(!q.empty()){
                dist++;
            }
        }
        return -1;
    }
};*/