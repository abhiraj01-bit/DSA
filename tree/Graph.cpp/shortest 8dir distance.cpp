/*leetcode
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int dist=1;
        int n=grid.size();
        if(grid[0][0]||grid[n-1][n-1]){
            return -1;
        }
        q.push({0,0});
        int dx[]={-1,-1,0,1,1,1,0,-1};
        int dy[]={0,1,1,1,0,-1,-1,-1};
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto[x,y]=q.front();
                if(x==n-1&&y==n-1){
                    return dist;
                }
                q.pop();
                for(int k=0;k<8;k++){
                    int nx=x+dx[k];
                    int ny=y+dy[k];
                    if(nx>=0&&nx<n&&ny>=0&&ny<n&&grid[nx][ny]==0){
                        grid[nx][ny]=1;
                        q.push({nx,ny});
                    }
                }
            }
            dist++;
        }
        return -1;
    }
};*/