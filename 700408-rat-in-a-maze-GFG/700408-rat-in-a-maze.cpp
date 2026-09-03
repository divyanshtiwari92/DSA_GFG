class Solution {
  private:
    void solve(int r, int c, vector<vector<int>>& maze, int n, 
               vector<string>& ans, string path) {
        // Base case: reached destination
        if (r == n - 1 && c == n - 1) {
            ans.push_back(path);
            return;
        }

        // Mark current cell as visited in-place
        maze[r][c] = 0;

        // Down
        if (r + 1 < n && maze[r + 1][c] == 1)
            solve(r + 1, c, maze, n, ans, path + 'D');

        // Left
        if (c - 1 >= 0 && maze[r][c - 1] == 1)
            solve(r, c - 1, maze, n, ans, path + 'L');

        // Right
        if (c + 1 < n && maze[r][c + 1] == 1)
            solve(r, c + 1, maze, n, ans, path + 'R');

        // Up
        if (r - 1 >= 0 && maze[r - 1][c] == 1)
            solve(r - 1, c, maze, n, ans, path + 'U');

        // Backtrack: restore the cell
        maze[r][c] = 1;
    }

  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        int n = maze.size();

        if (maze[0][0] == 1 && maze[n - 1][n - 1] == 1) {
            solve(0, 0, maze, n, ans, "");
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna