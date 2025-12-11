class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& b) {
        map<int, set<int>> mp_x;
        map<int, set<int>> mp_y;

        for(auto arr: b) {
            mp_x[arr[0]].insert(arr[1]);
            mp_y[arr[1]].insert(arr[0]);
        }

        int covered_buildings = 0;

        for(auto arr: b) {
            int x = arr[0];
            int y = arr[1];

            if(*mp_x[x].begin() == y || *mp_y[y].begin() == x) {
                continue;
            }

            if(*mp_x[x].rbegin() == y || *mp_y[y].rbegin() == x) {
                continue;
            }

            covered_buildings++;
        }

        return covered_buildings;
    }
};