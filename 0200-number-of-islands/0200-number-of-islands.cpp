class Solution {
public:

    void dfs(vector<vector<char>>& grid, int row, int col) {

        int m = grid.size();
        int n = grid[0].size();

        // Boundary check + Water check
        if (row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == '0')
            return;

        // Mark current land as visited
        grid[row][col] = '0';

        // Visit all 4 directions
        dfs(grid, row - 1, col); // Up
        dfs(grid, row + 1, col); // Down
        dfs(grid, row, col - 1); // Left
        dfs(grid, row, col + 1); // Right
    }

    int numIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        int islands = 0;

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1') {

                    islands++;

                    dfs(grid, i, j);
                }
            }
        }

        return islands;
    }
};