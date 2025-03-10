#include <bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
                                                                         //  _   _           _ _                
using namespace std;                                                     // | \ | |         | (_)              
                                                                         // |  \| | __ _  __| |_ _ __ ___   
const   int                                              mod = 1e9 + 7;  // | . ` |/ _` |/ _` | | '_ ` _ `  
#define pi     /*  ______         _                   */ 3.141592653     // | |\  | (_| | (_| | | | | | | |
#define ll     /* |  ____|       | |                  */ long long int   // |_| \_|\__,_|\__,_|_|_| |_| |_|
#define vi     /* | |__ __ _ _ __| |__   __ _ _ __    */ vector<ll>
#define vp     /* |  __/ _` | '__| '_ \ / _` | '_ `   */ vector<pair<ll, ll>>
#define pb     /* | | | (_| | |  | | | | (_| | | | |  */ push_back
#define all(x) /* |_|  \__,_|_|  |_| |_|\__,_|_| |_|  */ x.begin(),x.end() 
#define PI                                               3.141592653589793238462
#define set_bits                                         __builtin_popcountll
#define sz(x)                                            ((int)(x).size())    
const   int SZ=                                          1e5 + 10;
#define ull                                              unsigned long long     
#define erase_duplicates(x)                              x.erase(unique(all(x)),x.end());
#define debug(x)                                         cerr << #x <<" "; _print__(x); cerr << endl;

#define IOS    /*  ༼ つ ◕_◕ ༽つ                       */ (ios_base :: sync_with_stdio(false), cin.tie(NULL));
void    solve                                            (int _c);


//___________________________________________________________________________________________________________________________________________________


template<typename TYPE_NAME_, typename... __TYPE>
void in(TYPE_NAME_ &x, __TYPE&... nadim) { cin >> x; if constexpr (sizeof...(nadim) > 0) { in(nadim...);}}
template<typename TYPE_NAME_>
void in(vector<TYPE_NAME_> &v) {for (auto &it : v) {cin >> it;}}
template<typename TYPE_NAME_>
void out(const TYPE_NAME_ &x) {cout << x << "\n";}
template<typename TYPE_NAME_>
void outs(const TYPE_NAME_ &x) {cout << x << " ";}
template<typename TYPE_NAME_, typename... __TYPE>
void out(const TYPE_NAME_ &x, const __TYPE&... nadim) {cout << x << " ";out(nadim...);}
template<typename TYPE_NAME_>
void out(const vector<TYPE_NAME_> &v) {for (const auto &it : v) {cout << it << " ";}cout << "\n";}
template<typename TYPE_NAME_>
void outs(const vector<TYPE_NAME_> &v) {for (const auto &it : v) {cout << it << " ";}}
void out() { cout << "\n"; }
void _print__(int VALUE) { cerr << VALUE; }
void _print__(long long int VALUE) { cerr << VALUE; }
void _print__(unsigned long long VALUE) { cerr << VALUE; }
void _print__(string VALUE) { cerr << VALUE; }
void _print__(char VALUE) { cerr << VALUE; }
void _print__(double VALUE) { cerr << VALUE; }
void _print__(float VALUE) { cerr << VALUE; }
template <class TMP_, class V_1> void _print__(pair <TMP_, V_1> p);
template <class TMP_> void _print__(vector <TMP_> v);
template <class TMP_> void _print__(set <TMP_> v);
template <class TMP_, class V_1> void _print__(map <TMP_, V_1> v);
template <class TMP_> void _print__(multiset <TMP_> v);
template <class TMP_, class V_1> void _print__(pair <TMP_, V_1> p) {cerr << "{"; _print__(p.first); cerr << ","; _print__(p.second); cerr << "}";}
template <class TMP_> void _print__(vector <TMP_> v) {cerr << "[ "; for (TMP_ i : v) {_print__(i); cerr << " ";} cerr << "]";}
template <class TMP_> void _print__(set <TMP_> v) {cerr << "[ "; for (TMP_ i : v) {_print__(i); cerr << " ";} cerr << "]";}
template <class TMP_> void _print__(multiset <TMP_> v) {cerr << "[ "; for (TMP_ i : v) {_print__(i); cerr << " ";} cerr << "]";}
template <class TMP_, class V_1> void _print__(map <TMP_, V_1> v) {cerr << "[ "; for (auto i : v) {_print__(i); cerr << " ";} cerr << "]";}


template <typename TYPE_NAME_>
void srt(vector<TYPE_NAME_> &v) { sort(v.begin(), v.end()); }
template <typename TYPE_NAME_>
void rsrt(vector<TYPE_NAME_> &v) { sort(v.rbegin(), v.rend()); }
template <typename TYPE_NAME_>
ll SUM(vector<TYPE_NAME_> v) { return accumulate(v.begin(), v.end(), 0LL);  }
template <typename TYPE_NAME_>
ll SUM_R(vector<TYPE_NAME_> v, ll L, ll R) { return accumulate(v.begin() + L, v.begin() + (R + 1), 0LL); }

//                                           for set: less<T>
//                                     for multi_set: less_equal<T>
template <typename T> using pbds = tree<T, null_type, less<T>,       rb_tree_tag, tree_order_statistics_node_update>;

void to_upper(string &s) { transform(s.begin(), s.end(), s.begin(), :: toupper); }
void to_lower(string &s) { transform(s.begin(), s.end(), s.begin(), :: tolower); }

ll gcd(ll a, ll b) { return __gcd(a, b);}
ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b);}


//_______________________________________________________________________________________________


ll arr[SZ], Tree[4 * SZ];

void Build (ll Node, ll Begin, ll End) {

    if(Begin == End) {

        Tree[Node] = arr[Begin];   // OR arr[End];
        return;

    }

    ll Mid = (Begin + End) / 2;
    ll Left_Child = 2 * Node;
    ll Right_Child = (2 * Node) + 1;

    Build(Left_Child, Begin, Mid);
    Build(Right_Child, Mid + 1, End);

    Tree[Node] = min( Tree[Left_Child], Tree[Right_Child] );

}


void Update(ll Node, ll Begin, ll End, ll Index, ll Value) {

    if(Index < Begin || Index > End) {

        return;

    }

    if(Begin == End) {

        Tree[Node] = Value;
        return;

    }

    ll Mid = (Begin + End) / 2;
    ll Left_Child = 2 * Node;
    ll Right_Child = (2 * Node) + 1;

    Update(Left_Child, Begin, Mid, Index, Value);
    Update(Right_Child, Mid + 1, End, Index, Value);

    Tree[Node] = min( Tree[Left_Child], Tree[Right_Child] );
    
}


ll Query(ll Node, ll Begin, ll End, ll i, ll j) {

    if(End < i || Begin > j) {

        return INT_MAX;

    }

    if(Begin >= i && End <= j) {

        return Tree[Node];

    }

    ll Mid = (Begin + End) / 2;
    ll Left_Child = 2 * Node;
    ll Right_Child = (2 * Node) + 1;

    return min( Query( Left_Child, Begin, Mid, i, j), Query(Right_Child, Mid + 1, End, i, j) );

}


//___________________________________________________________________________________________________________________________________________________


int main(){
    IOS;
    int t = 1;
    /*
    cin >> t;
    */
    for(int i=1; i<=t; i++) {
        solve(i);
    }
    return 0;
}


//___________________________________________________________________________________________________________________________________________________


void solve(int _c) {
    
    ll n, q; cin >> n >> q;
    for(int i=1; i<=n; i++) {

        cin >> arr[i];

    }

    Build(1, 1, n);

    while(q--) {

        ll chk; in(chk);

        if(chk == 2) {

            ll l, r; in(l, r);
            l++;

            out(Query(1, 1, n, l, r) );

        } else {

            ll index, value; in(index, value);
            index++;

            Update(1, 1, n, index, value);

        }

    }
    
}


//___________________________________________________________________________________________________________________________________________________