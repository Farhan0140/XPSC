#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int         mod = 1e9 + 7;
#define pi          3.141592653
#define ll          long long int
#define all(x)      x.begin(),x.end()
#define out(x)      cout<<x<<"\n"

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x)               { cin >> x; }
void in(ll &x, ll &y)        { cin >> x >> y; }
void in(ll &x, string &y)    { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }
void in(vector<ll> &v) { for(auto &it: v){ cin >> it; }}

ll turn_on_kth_bit(ll n, ll k) { //-----> TC: O(1)
    return(n | (1LL << k));
}
//_______________________________________________________________________________________________

void solve() {
    ll a=0, b, c, d; in(b, c, d);
    ll mx = max(b, max(c, d));
    ll mxPos = __lg(mx);
    bool bl = false;

    for(int i=0; i<=mxPos; i++) {
        ll _0 = (0 | ((b >> i) & 1)) - (0 & ((c >> i) & 1));
        ll _1 = (1 | ((b >> i) & 1)) - (1 & ((c >> i) & 1));

        if(((d >> i) & 1) == _1) {
            a = turn_on_kth_bit(a, i);
        } else if(((d >> i) & 1) == _0) {
            // a = ((a >> i) & 1) | 0;
        } else {
            bl = true; break;
        }
    }
    (bl)? out(-1): out(a);
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