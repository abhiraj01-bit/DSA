/*gfg
// User function Template for C++

class Solution {
  public:
    int helpaterp(vector<vector<int>> hospital) {
        // code here
        queue<pair<int,int>>q;
        int n=hospital.size();
        int m=hospital[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(hospital[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int dx[]={-1,1,0,0};
        int dy[]={0,0,1,-1};
        int time=0;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto[x,y]=q.front();
                q.pop();
                for(int k=0;k<4;k++){
                    int nx=x+dx[k];
                    int ny=y+dy[k];
                    if(nx>=0&&nx<n&&ny>=0&&ny<m&&hospital[nx][ny]==1){
                        hospital[nx][ny]=2;
                        q.push({nx,ny});
                    }
                }
            }
            if(!q.empty()){
                time++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(hospital[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
    }
};
*/