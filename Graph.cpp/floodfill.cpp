/* class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor=image[sr][sc];
        if(oldcolor==color){
            return image;
        }
         queue<pair<int,int>>q;
        int n=image.size();
        int m=image[0].size();
        int dx[]={-1,1,0,0};
        int dy[]={0,0,-1,1};
        q.push({sr,sc});
        image[sr][sc]=color;
        while(!q.empty()){
            auto[x,y]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=0&&nx<n&&ny>=0&&ny<m&&image[nx][ny]==oldcolor){
                    image[nx][ny]=color;
                    q.push({nx,ny});
                }
            }
        }
        return image;
    }
};*/
/* dfs
class Solution {
public:
void dfs(int x,int y,vector<vector<int>>&image,int old,int color){
    image[x][y]=color;
    if(isvalid(x-1,y,image,old)){
        dfs(x-1,y,image,old,color);
    }
    if(isvalid(x+1,y,image,old)){
        dfs(x+1,y,image,old,color);
    }
    if(isvalid(x,y+1,image,old)){
        dfs(x,y+1,image,old,color);
    }
    if(isvalid(x,y-1,image,old)){
        dfs(x,y-1,image,old,color);
    }
}
bool isvalid(int nx,int ny,vector<vector<int>>&image,int oldcolor){
    int n=image.size();
    int m=image[0].size();
    if(nx<0||nx>=n||ny<0||ny>=m||image[nx][ny]!=oldcolor){
        return false;
    }
    return true;
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor=image[sr][sc];
        if(oldcolor == color){
            return image;
        }
        dfs(sr,sc,image,oldcolor,color);
        return image;
    }
};*/