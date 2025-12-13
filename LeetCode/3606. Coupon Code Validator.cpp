class Solution {
public:
    vector<string> validateCoupons(vector<string>& CD, vector<string>& BL, vector<bool>& AC) {
        vector<string> ans;

        for(int i=0; i<CD.size(); i++) {
            if(!check_code(CD[i])) {
                CD[i] = "";
            } 
        }

        // vector<string> electronics_codes;
        // vector<string> grocery_codes;
        // vector<string> pharmacy_codes;
        // vector<string> restaurant_codes;
        unordered_map<string, vector<string>> mp;
        mp["restaurant"] = {};
        mp["pharmacy"] = {};
        mp["grocery"] = {};
        mp["electronics"] = {};

        for(int i=0; i<CD.size(); i++) {
            if(CD[i] != "" && AC[i]) {
                //cout << CD[i] << " ";
                if(BL[i] == "electronics") {
                    mp[BL[i]].push_back(CD[i]);
                } else if(BL[i] == "grocery") {
                    mp[BL[i]].push_back(CD[i]);
                } else if(BL[i] == "pharmacy") {
                    mp[BL[i]].push_back(CD[i]);
                } else if(BL[i] == "restaurant") {
                    mp[BL[i]].push_back(CD[i]); 
                }
            }
        }

        // sort(electronics_codes.begin(), electronics_codes.end());
        // sort(grocery_codes.begin(), grocery_codes.end());
        // sort(pharmacy_codes.begin(), pharmacy_codes.end());
        // sort(restaurant_codes.begin(), restaurant_codes.end());

        // for(auto it: electronics_codes) {
        //     ans.push_back(it);
        // }
        // for(auto it: grocery_codes) {
        //     ans.push_back(it);
        // }
        // for(auto it: pharmacy_codes) {
        //     ans.push_back(it);
        // }
        // for(auto it: restaurant_codes) {
        //     ans.push_back(it);
        // }

        for(auto [cat, codes]: mp) {
            // cout << cat << endl;
            sort(codes.begin(), codes.end());

            for(auto it: codes) {
                ans.push_back(it);
            }
        }

        return ans;
    }

    bool check_code(string s) {
        for(auto ch: s) {
            if(!((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z') || (ch >= '0' && ch <= '9') || ch == '_')) {
                return false;
            }
        }
        return true;
    }
};