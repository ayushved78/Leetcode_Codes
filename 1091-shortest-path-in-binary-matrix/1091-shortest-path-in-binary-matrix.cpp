class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        /*
            Approach is simple, declare the directions and return -1. mark visited as 1 and move on
        */
        int n = grid.size();
//         check if the element 1 or the last is 1 or already visited
        if(grid[0][0] || grid[n-1][n-1])
            return -1;
//         mark the element 1 as marked if not marked already
        grid[0][0] = 1;
        queue<pair<int,int>> q;
        q.push({0,0});
        int t = 0; // this will take the count 
        while(q.size()) {
            int k = q.size();
            t++;
            while(k--) {
//                 get the x,y vals
                int x = q.front().first;
                int y = q.front().second;
//                 don't forget to pop
                q.pop();
                if(x==n-1 && y==n-1)
                    return t;
//                 get the direction x and direction y
                int dx[8] = {1,-1,0,0,1,1,-1,-1};
                int dy[8] = {0,0,1,-1,1,-1,1,-1};
//                 iterate over all directions
                for(int i=0;i<8;i++) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]==0) {
//                         mark the steps as marked to not return on them
                        grid[nx][ny] = 1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return -1;
    }
};