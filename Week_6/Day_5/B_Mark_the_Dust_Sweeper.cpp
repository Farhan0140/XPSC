#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int         mod = 1e9 + 7;
#define pi          3.141592653
#define ll          long long int
#define all(x)      x.begin(),x.end()
#define out(x)      cout<<x<<"\n"
#define inv(v)      for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x)               { cin >> x; }
void in(ll &x, ll &y)        { cin >> x >> y; }
void in(ll &x, string &y)    { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }

//_______________________________________________________________________________________________

void solve() {
    ll n; in(n);
    vector<ll> v(n);
    inv(v);

    ll idx = 0, _0 = 0;
    for(int i=0; i<n; i++) {
        if(v[i] != 0) {
            idx = i;
            break;
        } else {
            _0++;
        }
    }

    if(_0 == n) {
        out(0);
        return;
    }

    ll cnt=0;

    for(int i=idx; i<n-1; i++) {
        if(v[i] == 0) {
            cnt++;
        } else {
            cnt += v[i];
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