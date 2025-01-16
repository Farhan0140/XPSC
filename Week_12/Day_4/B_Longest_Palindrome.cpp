#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int                                     mod = 1e9 + 7;
#define pi                                      3.141592653
#define ll                                      long long int
#define vi                                      vector<ll>
#define pb                                      push_back
#define all(x)                                  x.begin(),x.end()
#define tc                                      ll ttc; cin >> ttc; while(ttc--)
#define IOS                                     (ios_base :: sync_with_stdio(false), cin.tie(NULL));

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
ll lcm(ll a, ll b) {return ((a / __gcd(a, b)) * b);}


//_______________________________________________________________________________________________

void solve() {
    ll n, q; in(n, q);
    map<string, int> _1, _2;

    for(int i=0; i<n; i++) {
        string s, rev; in(s);
        rev = s;
        reverse(all(rev));

        if(!_1.count(s) && !_1.count(rev)) {
            _1[s] = 1;
        } else if(_1.count(rev) && !_2.count(rev)) {
            _2[s] = 1;
        }
    }

    string s1 = "", s2 = "", mid;

    for(auto [x,y]: _1) {
        string tmp = x;
        reverse(all(tmp));

        if(_2.count(tmp)) {
            s1 += x;
            s2 = tmp + s2;
        }
    }

    auto is_pal = [](string s) {
        string tmp = s;
        reverse(all(tmp));

        return(tmp == s);
    };

    for(auto [x,y]: _1) {
        if(is_pal(x)) {
            mid = x;
            break;
        }
    }

    string s = s1+mid+s2;
    out(s.length());
    out(s);
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