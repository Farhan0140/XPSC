class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long len=1, ans=0, prev=-1;

        for(auto p: prices) {
            if(prev - p == 1) {
                len++;
                ans += len;
            } else {
                len = 1;
                ans++;
            }

            prev = p;
        }

        return ans;
    }
};