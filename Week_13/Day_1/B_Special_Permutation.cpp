#include <bits/stdc++.h>
using namespace std;
 
const   int                                     mod = 1e9 + 7;
#define pi                                      3.141592653
#define ll                                      long long int
#define vi                                      vector<ll>
#define pb                                      push_back
#define all(x)                                  x.begin(),x.end()
#define tc                                      ll ttc; cin >> ttc; while(ttc--)
#define IOS                                     (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//_______________________________________________________________________________________________


template<typename TMP_BRO, typename... Yo_Nadim>
void in(TMP_BRO &x, Yo_Nadim&... nadim) { cin >> x; if constexpr (sizeof...(nadim) > 0) { in(nadim...);}}
template<typename TMP_BRO>
void in(vector<TMP_BRO> &v) {for (auto &it : v) {cin >> it;}}
template<typename TMP_BRO>
void out(const TMP_BRO &x) {cout << x << "\n";}
template<typename TMP_BRO, typename... Yo_Nadim>
void out(const TMP_BRO &x, const Yo_Nadim&... nadim) {cout << x << " ";out(nadim...);}
template<typename TMP_BRO>
void out(const vector<TMP_BRO> &v) {for (const auto &it : v) {cout << it << " ";}cout << "\n";}
void out() { cout << "\n"; }
ll gcd(ll a, ll b) { return __gcd(a, b);}
ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b);}


//_______________________________________________________________________________________________

void solve() {
    ll n, a, b; in(n, a, b);
    vector<bool> chk(n+1, true);
    chk[a] = false;
    chk[b] = false;

    vi _1, _2;
    _1.pb(a);
    _2.pb(b);

    ll x = n / 2;
    --x;

    for(int i=n; i>=1; i--) {
        if(i >= a && chk[i] && x > 0) {
            _1.pb(i);
            chk[i] = false;
            x--;
        }
    }

    x = n / 2;
    --x;

    for(int i=1; i<=n; i++) {
        if(i <= b && chk[i] && x > 0) {
            _2.pb(i);
            chk[i] = false;
            x--;
        }
    }
    
    if((_1.size()+_2.size()) == n && (_1.size() == _2.size())) {
        for(auto it: _1) { cout << it << " "; }
        for(auto it: _2) { cout << it << " "; }
        out();
    } else {
        out(-1);
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