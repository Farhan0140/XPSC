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
    ll _1, _2; in(_1, _2);
    if(_2 > 0) {
        ll remaining;
        
        if(_2%2 == 1) {
            ll x = ceil((_2*1.0)/2);
            ll z = 7 * (x - 1);
            _1 -= (z+11);
            // remaining = (z+11) - _1;
            
            if(_1 <= 0) {
                out(x);
            } else {
                ll mn = (ceil((_1 * 1.0) / 15));
                // out(max(mn,x));
                out(mn+x);
            }
        } else {
            ll x = _2 / 2;
            ll z = 7 * x;
            _1 -= z;
            
            if(_1 <= 0) {
                out(x);
            } else {
                ll mn = (ceil((_1 * 1.0) / 15));
                out(mn+x);
            }
        }
    } else {
        out(ceil((_1*1.0)/15));
    }
}

//_______________________________________________________________________________________________


int main(){
    IOS;
    tc
      solve();
    return 0;
}


//_______________________________________________________________________________________________