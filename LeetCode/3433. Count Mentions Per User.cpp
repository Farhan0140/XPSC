class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        sort(events.begin(), events.end(), [](vector<string>a, vector<string>b){
            if(a[1] == b[1]) {
                return a[0] > b[0];
            }

            return stoi(a[1]) < stoi(b[1]);
        });

        vector<int> ans(numberOfUsers, 0);
        vector<bool> online(numberOfUsers, true);
        vector<int> timestamp(numberOfUsers, -1);

        for(auto e: events) {
            string event = e[0];
            int time = stoi(e[1]);

            // activating online, all users who go offline for 60 seconds before
            for(int i=0; i<numberOfUsers; i++) {
                if(!online[i] && time - timestamp[i] >= 60) {
                    online[i] = true;
                }
            }

            if(event == "MESSAGE") {
                if(e[2] == "ALL") {
                    for(int i=0; i<numberOfUsers; i++) {
                        ans[i]++;
                    }
                } else if(e[2] == "HERE") {
                    for(int i=0; i<numberOfUsers; i++) {
                        if(online[i]) {
                            ans[i]++;
                        }
                    }
                } else {
                    vector<int> ids = find_ids(e[2]);
                    for(auto id: ids) {
                        ans[id]++;
                    }
                }
            } else {
                int id = stoi(e[2]);
                online[id] = false;
                timestamp[id] = time;
            }
        }


        return ans;
    }

    vector<int> find_ids(string s) {
        string s_num = "";
        vector<int> ids;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'i' || s[i] == 'd') {
                continue;
            } 
            if(s[i] == ' ') {
                ids.push_back(stoi(s_num));
                s_num = "";
            } else {
                s_num += s[i];
            }
        }

        ids.push_back(stoi(s_num));

        return ids;
    }
};