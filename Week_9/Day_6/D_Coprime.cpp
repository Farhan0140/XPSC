#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int                                     mod = 1e9 + 7;
#define pi                                      3.141592653
#define ll                                      long long int
#define vi                                      vector<ll>
#define all(x)                                  x.begin(),x.end()
#define tc                                      ll ttc; cin >> ttc; while(ttc--)
#define IOS                                     (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void    in(ll &x)                               { cin >> x; }
void    in(ll &x, ll &y)                        { cin >> x >> y; }
void    in(ll &x, ll &y, ll &z)                 { cin >> x >> y >> z; }
void    in(ll &x, ll &y, ll &z, ll &a)          { cin >> x >> y >> z >> a; }
void    in(ll &x, string &y)                    { cin >> x >> y; }
void    in(string &x)                           { cin >> x; }
void    in(ll &x, string &y, string &z)         { cin >> x >> y >> z; }
void    in(string &x, string &y)                { cin >> x >> y; }
void    in(string &x, string &y, string &z)     { cin >> x >> y >> z; }
void    in(vector<ll> &v) { for(auto &it: v)    { cin >> it; }}

void    out()                                   { cout << "\n"; }
void    out(int x)                              { cout << x << "\n"; }
void    out(ll x)                               { cout << x << "\n"; }
void    out(char x)                             { cout << x << "\n"; }
void    out(double x)                           { cout << x << "\n"; }
void    out(string x)                           { cout << x << "\n"; }
void    out(int x, int y)                       { cout << x << " " << y << "\n"; }
void    out(ll x, ll y)                         { cout << x << " " << y << "\n"; }
void    out(auto x, auto y)                     { cout << x << " " << y << "\n"; }
void    out(ll x, string y)                     { cout << x << " " << y << "\n"; }
void    out(vector<ll> v)                       { for(auto it: v){ cout << it << " "; } cout << "\n"; }
void    out(vector<char> v)                     { for(auto it: v){ cout << it << " "; } cout << "\n"; }
void    out(vector<int> v)                      { for(auto it: v){ cout << it << " "; } cout << "\n"; }
void    out(vector<string> v)                   { for(auto it: v){ cout << it << " "; } cout << "\n"; }


ll gcd(ll a, ll b) {
    return __gcd(a, b);
}

ll lcm(ll a, ll b) {
    return ((a / __gcd(a, b)) * b);
}

vi co_primes[1005];


//_______________________________________________________________________________________________

void solve() {
    ll n; in(n); 
    vi arr(n+1);
    for(int i=1; i<=n; i++) {
        cin >> arr[i];
    }

    vi idx(1005, -1);

    for(int i=1; i<=n; i++) {
        idx[arr[i]] = i;
    }

    ll ans = 0;
    for(ll i=1; i<1001; i++) {
        if(idx[i] == -1) { continue; }

        if(i == 1) {
            ans = max(ans, 2*idx[i]);
            continue;
        }

        for(ll val: co_primes[i]) {
            if(idx[val] != -1) {
                ans = max(ans, idx[i]+idx[val]);
            }
        }
    }

    (ans==0)? out(-1): out(ans);
}

//_______________________________________________________________________________________________


int main(){
    IOS;

    for(int i=1; i<1001; i++) {
        for(int j=1; j<1001; j++) {
            if(gcd(i, j) == 1) {
                co_primes[i].push_back(j);
            }
        }
    }

    /*
    */
    tc
      solve();
    return 0;
}


//_______________________________________________________________________________________________