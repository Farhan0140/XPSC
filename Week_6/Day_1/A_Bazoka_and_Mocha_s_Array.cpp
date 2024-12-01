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
    ll n; in(n);
    vector<ll> v(n);
    map<ll, ll> mp;
    inv(v);
    
    if(is_sorted(all(v))) {
        out("Yes");
    } else {
        ll mn = v[0], idx = n;
        vector<ll> _1, _2;
        _1.push_back(mn);

        for(int i=1; i<n; i++) {
            if(mn <= v[i]) {
                _1.push_back(v[i]);
                mn = v[i];
            } else {
                idx = i;
                break;
            }
        }

        for(int i=idx; i<n; i++) {
            _2.push_back(v[i]);
        }

        v.clear();

        for(int i=0; i<_2.size(); i++) {
            v.push_back(_2[i]);
        }

        for(int i=0; i<_1.size(); i++) {
            v.push_back(_1[i]);
        }

        (is_sorted(all(v)))? out("Yes"): out("No");
    }
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