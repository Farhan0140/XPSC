class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() <= 0) {
            return 0;
        }

        int max_len = INT_MIN;
        int temp_len = 0;


        for(int i=0; i<s.length(); i++) {
            map<char, bool> v;
 
            if(!v[s[i]]) {
                for(int j=i; j<s.length(); j++) {
                    if(!v[s[j]]) {
                        temp_len++;
                        v[s[j]] = true;
                    } else {
                        max_len = max(max_len, temp_len);
                        temp_len = 0;
                        break;
                    }

                    if(j == s.size()-1) {
                        max_len = max(max_len, temp_len);
                        temp_len = 0;
                    }
                }
            }
        }

        return max_len;
    }
};