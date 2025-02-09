/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int freq[arr.size()];

        for(int i=0; i<arr.size(); i++) {
            freq[i] = 0;
        }

        Tmp(arr, ans, tmp, freq);
        return ans;
    }

    void Tmp(vector<int>& arr, vector<vector<int>> &ans, vector<int> &tmp, int freq[]) {
        if(arr.size() == tmp.size()) {
            ans.push_back(tmp);
            return;
        }

        for(int i=0; i<arr.size(); i++) {
            if(!freq[i]) {
                tmp.push_back(arr[i]);
                freq[i] = 1;

                Tmp(arr, ans, tmp, freq);
                freq[i] = 0;
                tmp.pop_back();
            }
        }
    }
};
// @lc code=end

