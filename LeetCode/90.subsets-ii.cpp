/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
    public:
        vector<vector<int>> subsetsWithDup(vector<int>& arr) {
            vector<vector<int>> ans;
            vector<int> tmp;
            sort(arr.begin(), arr.end());
    
            chk(arr, ans, tmp, 0, false);
            return ans;
        }
    
        void chk(vector<int>& arr, vector<vector<int>> &ans, vector<int>& tmp, int i, bool prev) {
            if(i == arr.size()) {
                ans.push_back(tmp);
                return;
            }
    
            chk(arr, ans, tmp, i+1, false);
            if(i > 0 && arr[i] == arr[i-1] && !prev) { return; }
    
            tmp.push_back(arr[i]);
            chk(arr, ans, tmp, i+1, true);
            tmp.pop_back();
        }
};
// @lc code=end

