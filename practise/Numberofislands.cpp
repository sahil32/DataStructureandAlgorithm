class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty() || grid[0].empty()) {
            return 0;
        }
       int H=grid.size();
        int W=grid[0].size();
        int island=0;
        auto inside=[&](int row,int col)
        {
            return 0 <= row && 0 <= col && col < W && row < H;
        };
      
        vector <pair<int,int>> directions={{1,0},{0,1},{-1,0},{0,-1}};
        vector <vector<bool>> vis(H, vector<bool>(W));
        for(int row=0;row<H;row++)
        {
            for(int col=0;col<W;col++)
            {
                if(!vis[row][col]&&grid[row][col]=='1')
                {
                     island++;
                    queue <pair<int,int>> q;                   
                    q.push({row,col}); 
                    vis[row][col]=true;
                    while(!q.empty())
                    {
                        pair<int,int> p=q.front();
                        q.pop();
                        for(pair<int,int> x:directions)
                        {
                            int new_row=p.first+x.first;
                            int new_col=p.second+x.second;
                            if(inside(new_row,new_col)&&grid[new_row][new_col]=='1'&&!vis[new_row][new_col])
                            {
                                q.push({new_row,new_col});
                                vis[new_row][new_col]=true;
                            }
                        }
                    }
                }
            }
        }
        return island;
    }
};
