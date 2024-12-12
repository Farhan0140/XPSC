#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int         mod = 1e9 + 7;
#define pi          3.141592653
#define ll          long long int
#define vi          vector<ll>
#define all(x)      x.begin(),x.end()
#define out(x)      cout<<x<<"\n"

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void    in(ll &x)                              { cin >> x; }
void    in(ll &x, ll &y)                       { cin >> x >> y; }
void    in(ll &x, ll &y, ll &z)                { cin >> x >> y >> z; }
void    in(ll &x, ll &y, ll &z, ll &a)         { cin >> x >> y >> z >> a; }
void    in(ll &x, string &y)                   { cin >> x >> y; }
void    in(ll &x, string &y, string &z)        { cin >> x >> y >> z; }
void    in(string &x, string &y)               { cin >> x >> y; }
void    in(string &x, string &y, string &z)    { cin >> x >> y >> z; }
void    in(vector<ll> &v) { for(auto &it: v)   { cin >> it; }}

//_______________________________________________________________________________________________

void solve() {
    ll n, m, k; in(n, m, k);
    vi v(m+1); in(v);

    ll x = v.back(), ans = 0;

    for(int j=0; j<m; j++) {
        ll  cnt = v[j] ^ x;

        if(__builtin_popcount(cnt) <= k) {
            ans++;
        }
    }

    out(ans);
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