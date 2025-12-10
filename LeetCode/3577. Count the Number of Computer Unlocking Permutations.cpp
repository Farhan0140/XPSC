class Solution {
public:
    int countPermutations(vector<int>& cp) {

        for(int i=1; i<cp.size(); i++) {
            if(cp[0] >= cp[i]) {
                return 0;
            }
        }

        return find_fact(cp.size())  % 1000000007;
    }

    int find_fact(int n) {
        long int fact = 1;
        for(int i=1; i<n; i++) {
            fact = (fact * i) % 1000000007;
        }

        return fact  % 1000000007;
    }
};