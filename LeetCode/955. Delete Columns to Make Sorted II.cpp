class Solution {
public:
    int minDeletionSize(vector<string>& arr) {
        int cnt = 0;
        vector<bool> sorted(arr.size(), false);


        for(int i=0; i<arr[0].length(); i++) {
            bool flag = false;
            for(int j=0; j<arr.size()-1; j++) {
                if( !sorted[j] && arr[j][i] > arr[j+1][i] ) {
                    flag = true;
                    break;
                }
            }

            if(flag) {
                cnt++;
                continue;
            }

            for(int j=0; j<arr.size()-1; j++) {
                if( !sorted[j] && arr[j][i] < arr[j+1][i] ) {
                    sorted[j] = true;
                }
            }
        }

        return cnt;
    }
};