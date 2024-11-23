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

//_______________________________________________________________________________________________

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    inv(v);

    int len = v.size();
    unordered_map<int, int> mp;
    int mx_len = 0, sum = 0;
    for(int i=0; i<len; i++) {
        sum += v[i];

        if(sum == k) {
            mx_len = i + 1;
        }

        if(mp.find(sum - k) != mp.end()) {
            mx_len = max(mx_len, i - mp[sum - k]);
        }

        if(mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    out(mx_len);
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    /*
    tc
    */
      solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________