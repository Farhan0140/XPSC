#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) (x=="\n")?cout<<"\n":cout<<x<<"\n";
#define inv(v) for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));


bool cmp_1(pair<char, int> a, pair<char, int> b) {
    return a.second < b.second;
}

bool cmp_2(pair<char, int> a, pair<char, int> b) {
    return a.first < b.first;
}

bool cmp_3(pair<char, int> a, pair<char, int> b) {
    return a.first > b.first;
}

//_______________________________________________________________________________________________

void solve() {
    string s; cin >> s;
    ll l = s.length();
    vector<pair<char, int>> v;

    char _1 = min(s[0], s[l-1]);
    char _2 = max(s[0], s[l-1]);

    for(int i=0; i<l; i++) {
        if(s[i] >= _1 && s[i] <= _2) {
            v.push_back({s[i], i});
        }
    }

    sort(all(v), cmp_1);

    if(v.size() > 2) {
        if(s[0] > s[l-1]) {
            sort(v.begin()+1, v.begin()+v.size()-1, cmp_3);
        } else {
            sort(v.begin()+1, v.begin()+v.size()-1, cmp_2);
        }
    }

    ll cost = 0;
    vector<ll> ans;
    ans.push_back(1);

    for(int i=1; i<v.size(); i++) {
        cost += abs(v[i].first - v[i-1].first);
        ans.push_back(v[i].second + 1);
    }

    cout << cost << " " << ans.size() << endl;

    for(auto it: ans) {
        cout << it << " ";
    }
    cout << endl;
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    /*
    */
    tc
      solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________