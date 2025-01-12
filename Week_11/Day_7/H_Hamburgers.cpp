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


//_______________________________________________________________________________________________

void solve() {
    string S; in(S);
    ll hb, hs, hc; in(hb, hs, hc);
    ll pb, ps, pc; in(pb, ps, pc);
    ll m; in(m);

    ll b = 0, s = 0, c = 0;
    for(int i=0; i<S.length(); i++) {
        if(S[i] == 'B') {
            b++;
        } else if(S[i] == 'S') {
            s++;
        } else {
            c++;
        }
    }

    auto ok = [&](ll mid) {
        ll x = max(0LL, b*mid - hb); 
        ll y = max(0LL, s*mid - hs); 
        ll z = max(0LL, c*mid - hc); 

        ll cost = (x * pb) + (y * ps) + (z * pc);

        return cost <= m;
    };

    ll l = 0, r = 1e13, ans;

    while(l <= r) {
        ll mid = l + (r - l) / 2;

        if(ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
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