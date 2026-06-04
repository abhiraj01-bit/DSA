/*gfg
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        //destination 1 hona chahiye
        //src kesa bhi
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        auto[x1,y1]=source;
        auto[x2,y2]=destination;
        if(grid[x2][y2]!=1){
            return -1;
        }
        if(x1==x2&&y1==y2){
            return 0;
        }
        q.push({x1,y1});
        grid[x1][y1]=0;
        int dist=1;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,1,-1};
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto[x,y]=q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int nx=x+dx[k];
                    int ny=y+dy[k];
                    if(nx>=0&&nx<n&&ny>=0&&ny<m&&grid[nx][ny]==1){
                        if(nx==x2&&ny==y2){
                    return dist;
                }
                        grid[nx][ny]=0;
                        q.push({nx,ny});
                    }
                }
            }
            dist++;
        }
        return -1;
    }
};
*/