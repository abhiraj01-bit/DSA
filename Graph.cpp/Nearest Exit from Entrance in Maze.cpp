/*leetcode
class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,int>>q;
        int n=maze.size();
        int m=maze[0].size();
        int x1,y1;
       x1=entrance[0];
       y1=entrance[1];
        q.push({x1,y1});
        maze[x1][y1]='+';
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
                    if(nx>=0&&nx<n&&ny>=0&&ny<m&&maze[nx][ny]=='.'){
                        if(nx==0||ny==0||nx==n-1||ny==m-1){
                        return dist;
                    }
                        maze[nx][ny]='+';
                        q.push({nx,ny});
                    }
                }
            }
            dist++;
        }
        return -1;
    }
};*/