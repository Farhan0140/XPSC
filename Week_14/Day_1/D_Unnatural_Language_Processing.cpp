#include <bits/stdc++.h>                                              //  ______         _                  
using namespace std;                                                  // |  ____|       | |                 
                                                                      // | |__ __ _ _ __| |__   __ _ _ __   
const   int                                            mod = 1e9 + 7; // |  __/ _` | '__| '_ \ / _` | '_ \  
#define pi     /*   _   _           _ _             */ 3.141592653    // | | | (_| | |  | | | | (_| | | | | 
#define ll     /*  | \ | |         | (_)            */ long long int  // |_|  \__,_|_|  |_| |_|\__,_|_| |_| 
#define vi     /*  |  \| | __ _  __| |_ _ __ ___    */ vector<ll>
#define vp     /*  | . ` |/ _` |/ _` | | '_ ` _ \   */ vector<pair<ll, ll>>
#define pb     /*  | |\  | (_| | (_| | | | | | | |  */ push_back
#define all(x) /*  |_| \_|\__,_|\__,_|_|_| |_| |_|  */ x.begin(),x.end()     
               
#define IOS    /*  ༼ つ ◕_◕ ༽つ                     */ (ios_base :: sync_with_stdio(false), cin.tie(NULL));


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
template <typename TMP_BRO>
void srt(vector<TMP_BRO> &v) { sort(v.begin(), v.end()); }
template <typename TMP_BRO>
void rsrt(vector<TMP_BRO> &v) { sort(v.rbegin(), v.rend()); }

void to_upper(string &s) { transform(s.begin(), s.end(), s.begin(), :: toupper); }
void to_lower(string &s) { transform(s.begin(), s.end(), s.begin(), :: tolower); }

ll gcd(ll a, ll b) { return __gcd(a, b);}
ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b);}


//___________________________________________________________________________________________________________________________________________________

void solve(int Case) {
    ll n; in(n);
    string s; in(s);

    auto chk = [](char ch) {
        if(ch == 'a' || ch == 'e') {
            return 1;
        }
        return 2;
    };

    string ans = "";
    ll ptr, i;

    for(i=0; i<n-3; i++) {
        char _1 = s[i], _2 = s[i+1], _3 = s[i+2], _4 = s[i+3];

        if(chk(_4) != 1) {
            ans += _1;
            ans += _2;
            ans += _3;
            ans += '.';
            i += 2;
        } else {
            ans += _1;
            ans += _2;
            ans += '.';
            i += 1;
        }
    }
    for(; i<n; i++) {
        ans += s[i];
    }

    out(ans);
}

//___________________________________________________________________________________________________________________________________________________


int main(){
    IOS;
    int t = 1;
    /*
    */
    cin >> t;
    for(int i=1; i<=t; i++) {
        solve(i);
    }
    return 0;
}


//___________________________________________________________________________________________________________________________________________________