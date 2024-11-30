#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout<<x<<"\n"
#define inv(v) for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x) { cin >> x; }
void in(ll &x, ll &y) { cin >> x >> y; }
void in(ll &x, string &y) { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }

//_______________________________________________________________________________________________

void solve() {
    ll n, k; in(n);
    string s; in(k, s);
    vector<ll> _1;

    for(int i=0; i<n; i++) {
        if(s[i] == '1') {
            _1.push_back(i+1);
        }
    }

    ll cnt = 0;
    if(_1.size() == 0) {
        for(int i=1; i<=n; i+=(k+1)) {
            cnt++;
        }
    } else {
        for(int i=_1[_1.size()-1]+(k+1); i<=n; i+=(k+1)) {
            cnt++;
        }

        for(int i=1; i<=_1[0]-(k+1); i+=(k+1)) {
            cnt++;
        }

        ll st, ed;
        for(int i=0; i<_1.size()-1; i++) {
            st = _1[i];
            ed = _1[i+1];

            for(int j=st+(k+1); j<=ed-(k+1); j+=(k+1)) {
                cnt++;
            }
        }
    }

    out(cnt);
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