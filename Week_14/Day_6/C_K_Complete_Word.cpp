#include <bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
                                                                         //  _   _           _ _                
using namespace std;                                                     // | \ | |         | (_)              
                                                                         // |  \| | __ _  __| |_ _ __ ___   
const   int                                               mod = 1e9 + 7; // | . ` |/ _` |/ _` | | '_ ` _ \  
#define pi     /*  ______         _                   */ 3.141592653     // | |\  | (_| | (_| | | | | | | |
#define ll     /* |  ____|       | |                  */ long long int   // |_| \_|\__,_|\__,_|_|_| |_| |_|
#define vi     /* | |__ __ _ _ __| |__   __ _ _ __    */ vector<ll>
#define vp     /* |  __/ _` | '__| '_ \ / _` | '_ \   */ vector<pair<ll, ll>>
#define pb     /* | | | (_| | |  | | | | (_| | | | |  */ push_back
#define all(x) /* |_|  \__,_|_|  |_| |_|\__,_|_| |_|  */ x.begin(),x.end()     
               
#define IOS    /*  ༼ つ ◕_◕ ༽つ                       */ (ios_base :: sync_with_stdio(false), cin.tie(NULL));


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

//                                           for set: less<T>
//                                     for multi_set: less_equal<T>
template <typename T> using pbds = tree<T, null_type, less<T>,       rb_tree_tag, tree_order_statistics_node_update>;

void to_upper(string &s) { transform(s.begin(), s.end(), s.begin(), :: toupper); }
void to_lower(string &s) { transform(s.begin(), s.end(), s.begin(), :: tolower); }

ll gcd(ll a, ll b) { return __gcd(a, b);}
ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b);}


//___________________________________________________________________________________________________________________________________________________

void solve(int Case) {
    ll n, k; in(n, k);
    string s; in(s);

    ll ans = 0;
    for(int i=0; i<k/2; i++) {
        int cnt[26] = {0};
        for(int st=0; st+k-1 < n; st+=k) {
            int i1 = st + i;
            int i2 = st + (k - 1 - i);

            cnt[s[i1] - 'a']++;
            cnt[s[i2] - 'a']++;
        } 

        int req = 2 * (n / k);
        int mx = *max_element(cnt, cnt+26);

        ans += req - mx;
    }

    if(k & 1) {
        int cnt[26] = {0};
        for(int i=k/2; i<n; i+=k) {
            cnt[s[i] - 'a']++;
        }

        int req = n / k;
        int mx = *max_element(cnt, cnt+26);

        ans += req - mx;
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