/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
class Solution {
    public:
        vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>> ans;
            string s = "";
            for(int i=0; i<n; i++) {
                s.push_back('.');
            }
            vector<string> tmp;
            vector<vector<bool>> grid(n, vector<bool>(n));
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    grid[i][j] = false;
                }
            }
    
            perfect_pos(ans, tmp, grid, s, n, 0);
            return ans;
        }
    
        void perfect_pos(vector<vector<string>> &ans, vector<string> &tmp, vector<vector<bool>> &grid, string &s, int n, int i) {
            if(i == n) { 
                ans.push_back(tmp);
                return; 
            }
    
            for(int pos=0; pos<n; pos++) {
                string s1 = s;
                if(is_perfect(grid, i, pos, n)) {
                    grid[i][pos] = true;
                    s1[pos] = 'Q';
                    tmp.push_back(s1);
    
                    perfect_pos(ans, tmp, grid, s, n, i+1);
    
                    grid[i][pos] = false;
                    s1[pos] = '.';
                    tmp.pop_back();
                }
            }
        }
    
        bool is_perfect(vector<vector<bool>> &grid, int x, int y, int n) {
            for(int i=x-1; i>=0; i--) {
                if(grid[i][y]) {
                    return false;
                }
            }
            for(int i=x+1; i<n; i++) {
                if(grid[i][y]) {
                    return false;
                }
            }
    
            for(int i=y-1; i>=0; i--) {
                if(grid[x][i]) {
                    return false;
                }
            }
            for(int i=y+1; i<n; i++) {
                if(grid[x][i]) {
                    return false;
                }
            }
    
            int tmp = y+1;
            for(int i=x-1; i>=0; i--) {
                if(tmp < n && grid[i][tmp]) {
                    return false;
                }
                tmp++;
            }
            tmp = x+1;
            for(int i=y-1; i>=0; i--) {
                if(tmp < n && grid[tmp][i]) {
                    return false;
                }
                tmp++;
            }
    
            tmp = x+1;
            for(int i=y+1; i<n; i++) {
                if(tmp < n && grid[tmp][i]) {
                    return false;
                }
                tmp++;
            }
            tmp = x-1;
            for(int i=y-1; i>=0; i--) {
                if(tmp >= 0 && grid[tmp][i]) {
                    return false;
                }
                tmp--;
            }
    
            return true;
        }
};
// @lc code=end

