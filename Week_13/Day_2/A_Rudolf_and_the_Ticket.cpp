#include <bits/stdc++.h>                                          //  ______         _                   _   _           _ _  
using namespace std;                                              // |  ____|       | |                 | \ | |         | (_)  
                                                                  // | |__ __ _ _ __| |__   __ _ _ __   |  \| | __ _  __| |_ _ __ ___ 
const   int                                     mod = 1e9 + 7;    // |  __/ _` | '__| '_ \ / _` | '_ \  | . ` |/ _` |/ _` | | '_ ` _  `
#define pi                                      3.141592653       // | | | (_| | |  | | | | (_| | | | | | |\  | (_| | (_| | | | | | | |
#define ll                                      long long int     // |_|  \__,_|_|  |_| |_|\__,_|_| |_| |_| \_|\__,_|\__,_|_|_| |_| |_|
#define vi                                      vector<ll>
#define pb                                      push_back
#define all(x)                                  x.begin(),x.end()
#define tc                                      ll ttc; cin >> ttc; while(ttc--)                        
#define IOS  /*  ༼ つ ◕_◕ ༽つ  */              (ios_base :: sync_with_stdio(false), cin.tie(NULL));


//___________________________________________________________________________________________________________________________________________________


template<typename TMP_BRO, typename... Yo_Nadim>
void in(TMP_BRO &x, Yo_Nadim&... nadim) { cin >> x; if constexpr (sizeof...(nadim) > 0) { in(nadim...);}}
template<typename TMP_BRO>
void in(vector<TMP_BRO> &v) {for (auto &it : v) {cin >> it;}}
template<typename TMP_BRO>
void out(const TMP_BRO &x) {cout << x << "\n";}
template<typename TMP_BRO>
void outs(const TMP_BRO &x) {cout << x << " ";}
template<typename TMP_BRO, typename... Yo_Nadim>
void out(const TMP_BRO &x, const Yo_Nadim&... nadim) {cout << x << " ";out(nadim...);}
template<typename TMP_BRO>
void out(const vector<TMP_BRO> &v) {for (const auto &it : v) {cout << it << " ";}cout << "\n";}
template<typename TMP_BRO>
void outs(const vector<TMP_BRO> &v) {for (const auto &it : v) {cout << it << " ";}}
void out() { cout << "\n"; }
void to_upper(string &s) { transform(s.begin(), s.end(), s.begin(), :: toupper); }
void to_lower(string &s) { transform(s.begin(), s.end(), s.begin(), :: tolower); }

ll gcd(ll a, ll b) { return __gcd(a, b);}
ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b);}


//___________________________________________________________________________________________________________________________________________________

void solve() {
    ll n, m, k; in(n,m,k);
    vi a(n), b(m); in(a); in(b);

    ll cnt = 0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i] + b[j] <= k) {
                cnt++;
            }
        }
    }

    out(cnt);
}

//___________________________________________________________________________________________________________________________________________________


int main(){
    IOS;
    /*
    */
    tc
      solve();
    return 0;
}


//___________________________________________________________________________________________________________________________________________________