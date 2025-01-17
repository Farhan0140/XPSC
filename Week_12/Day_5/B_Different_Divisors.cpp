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

vi primes;

void all_prime() {
    vector<bool> p(1e6, true);

    for(int i=2; i*i<=1e6; i++) {
        if(p[i]) {
            for(int j=i+i; j<=1e6; j+=i) {
                p[j] = false;
            }
        }
    }

    for(int i=2; i<=1e6; i++) {
        if(p[i]) {
            primes.push_back(i);
        }
    }
}

//_______________________________________________________________________________________________

void solve() {
    ll n, ans = 1; in(n);

    for(int i=0; i<primes.size(); i++) {
        if(primes[i]-1 >= n) {
            ans *= primes[i];
            break;
        }
    }

    for(int i=0; i<primes.size(); i++) {
        if(primes[i]-ans >= n) {
            ans *= primes[i];
            break;
        }
    }

    out(ans);
}

//_______________________________________________________________________________________________


int main(){
    IOS;
    all_prime();
    /*
    */
    tc
      solve();
    return 0;
}


//_______________________________________________________________________________________________