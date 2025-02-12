/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
    public:
        vector<vector<int>> combinationSum2(vector<int>& arr, int t) {
            sort(arr.begin(), arr.end());
            vector<vector<int>> ans;
            vector<int> tmp;
            chk(arr, ans, tmp, t, 0);
            return ans;
        }
    
        void chk(vector<int>& arr, vector<vector<int>> &ans, vector<int>& tmp, int t, int idx) {
            if(t < 0) {
                return;
            }
            if(t == 0) {
                ans.push_back(tmp);
                return;
            }
    
            for(int i=idx; i<arr.size(); i++) {
                if(i > idx && arr[i] == arr[i - 1]) {
                    continue;
                }
    
                tmp.push_back(arr[i]);
                chk(arr, ans, tmp, t - arr[i], i+1);
                tmp.pop_back();
            }
        }
    };
// @lc code=end

