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
    ll a, b, l; in(a,b,l);
    vi div;

    auto DIV = [&]() {
        for(int i=1; i*i<=l; i++) {
            if(l%i == 0) {
                div.push_back(i);

                if(l/i != i) {
                    div.push_back(l/i);
                }
            }
        }
    }; DIV();

    vi x, y;

    for(int i=0; i<=22; i++) {
        ll tmp = pow(a, i);

        if(tmp <= 1e6) {
            x.push_back(tmp);
        } else {
            break;
        }
    }
    for(int i=0; i<=22; i++) {
        ll tmp = pow(b, i);

        if(tmp <= 1e6) {
            y.push_back(tmp);
        } else {
            break;
        }
    }

    ll cnt = 0;

    for(int i=0; i<div.size(); i++) {
        bool flag = false;

        for(int j=0; j<x.size(); j++) {
            for(int k=0; k<y.size(); k++) {
                if(div[i]*x[j]*y[k] == l) {
                    cnt++;
                    flag = true;
                    break;
                }
            }
            if(flag) {
                break;
            }
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