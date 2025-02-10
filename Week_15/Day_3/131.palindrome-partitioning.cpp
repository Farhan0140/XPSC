/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */

// @lc code=start
class Solution {
    public:
        vector<vector<string>> partition(string s) {
            vector<vector<string>> ans;
            vector<string> tmp;
            find(ans, tmp, s, 0, s.length());
            return ans;
        }
    
        void find(vector<vector<string>> &ans, vector<string> &tmp, string s, int idx, int len) {
            if(idx == len) {
                ans.push_back(tmp);
                return;
            }
    
            for(int i=idx; i<len; i++) {
                if(is_pal(s, idx, i)) {
                    tmp.push_back(s.substr(idx, i - idx + 1));
                    find(ans, tmp, s, i + 1, len);
                    tmp.pop_back();
                }
            }
        }
    
        bool is_pal(string s, int l, int r) {
            while(l <= r) {
                if(s[l++] != s[r--]) {
                    return false;
                }
            }
            return true;
        }
    };
// @lc code=end

