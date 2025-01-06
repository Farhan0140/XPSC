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
    ll l_c; in(l_c);
    vi arr_l(l_c); in(arr_l);

    ll q; in(q);
    while(q--) {
        ll x; in(x);

        ll s_l = -1, l = 0, r = l_c - 1;
        while(l <= r) {
            ll mid = (l + r) / 2;
            if(arr_l[mid] < x) {
                s_l = arr_l[mid];
            }

            if(arr_l[mid] < x) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }

        auto u_l = upper_bound(all(arr_l), x);
        if(s_l != -1 && u_l != arr_l.end()) {
            out(s_l, *u_l);
        } else if(s_l != -1 && u_l == arr_l.end()){
            out(s_l, "X");
        } else if(s_l == -1 && u_l != arr_l.end()) {
            cout << "X" << " " << *u_l << "\n";
        } else {
            cout << "X" << " " << "X" << endl;
        }
    }
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