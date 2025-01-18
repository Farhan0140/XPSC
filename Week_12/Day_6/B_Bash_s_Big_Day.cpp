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
    ll n; in(n);
    vi arr(n);
    map<ll, ll> mp;
    ll ans = 1;

    for(int i=0; i<n; i++) {
        in(arr[i]);
        mp[arr[i]]++;
        if(arr[i] != 1) {
            ans = max(ans, mp[arr[i]]);
        }
    }

    if(n == 1) {
        out(1); return;
    }

    for(int i=0; i<n; i++) {
        for(int j=2; j*j<=arr[i]; j++) {
            if(arr[i]%j == 0) {
                mp[j]++;
                ans = max(ans, mp[j]);

                if(arr[i]/j != j) {
                    mp[arr[i]/j]++;
                    ans = max(ans, mp[arr[i]/j]);
                }
            }
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