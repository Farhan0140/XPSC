#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout<<x<<"\n";
#define inv(v) for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x) { cin >> x; }
void in(ll &x, ll &y) { cin >> x >> y; }
void in(ll &x, string &y) { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }

// bool cmp(pair<char, int> a, pair<char, int> b) {
//     return a.second > b.second;
// }
//_______________________________________________________________________________________________

void solve() {
    ll n; string s; in(n, s);
    map<char, int> mp;

    for(auto it: s) {
        mp[it]++;
    }

    vector<pair<char, int>> v;
    for(auto [ch, c]: mp) {
        v.push_back({ch, c});
    }
    sort(all(v), [&](pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;
    });

    string s1(n, ' ');
    ll idx = 0;

    for(auto [ch, c]: v) {
        for(int i=0; i<c; i++) {
            if(idx >= n) {
                idx = 1;
            }
            if(idx < n) {
                s1[idx] = ch;
            }
            idx += 2;
        }
    }

    out(s1);
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