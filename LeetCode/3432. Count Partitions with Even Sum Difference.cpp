class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int> prefix(nums.size());

        prefix[0] = nums[0];
        int total_sum = 0;

        for(int i=1; i<nums.size(); i++) {
            prefix[i] = nums[i] + prefix[i-1];
            total_sum = prefix[i];
        }

        int cnt = 0;

        for(int i=0; i<nums.size()-1; i++) {
            int right = total_sum - prefix[i];

            if(abs(right-prefix[i]) % 2 == 0) {
                cnt++;
            }
        }

        return cnt;
    }
};