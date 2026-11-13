/*
leetcode
class Solution {
public:
    bool dfsp(int x, int y, vector<vector<int>>& heights,
              vector<vector<bool>>& vis, int n, int m) {

        if(x < 0 || x >= n || y < 0 || y >= m || vis[x][y])
            return false;

        vis[x][y] = true;

        int dx[] = {0, -1, 1, 0};
        int dy[] = {1, 0, 0, -1};

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m &&
               !vis[nx][ny] && heights[nx][ny] >= heights[x][y]) {
                dfsp(nx, ny, heights, vis, n, m);
            }
        }
        return true;
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<bool>> p(n, vector<bool>(m, false));
        vector<vector<bool>> a(n, vector<bool>(m, false));

        for(int i = 0; i < n; i++) {
            dfsp(i, 0, heights, p, n, m);
            dfsp(i, m-1, heights, a, n, m);
        }

        for(int j = 0; j < m; j++) {
            dfsp(0, j, heights, p, n, m);
            dfsp(n-1, j, heights, a, n, m);
        }

        vector<vector<int>> ans;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(p[i][j] && a[i][j])
                    ans.push_back({i, j});
            }
        }

        return ans;
    }
};*/