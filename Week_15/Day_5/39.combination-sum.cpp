/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
    public:
        vector<vector<int>> combinationSum(vector<int>& arr, int t) {
            vector<vector<int>> ans;
            vector<int> tmp;
    
            chk(arr, ans, tmp, t, 0);
            return ans;
        }
    
        void chk(vector<int> &arr, vector<vector<int>> &ans, vector<int> &tmp, int t, int i) {
            if(t < 0 || i >= arr.size()) {
                return;
            }
            if(t == 0) {
                ans.push_back(tmp);
                return;
            }
    
            tmp.push_back(arr[i]);
            chk(arr, ans, tmp, t - arr[i], i);
    
            tmp.pop_back();
            chk(arr, ans, tmp, t, i+1);
        }
};
// @lc code=end

