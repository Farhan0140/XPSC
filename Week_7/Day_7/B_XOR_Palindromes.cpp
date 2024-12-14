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
void    out(vector<ll> v)                       { for(auto it: v){ cout << it; } cout << "\n"; }
void    out(vector<char> v)                     { for(auto it: v){ cout << it << " "; } cout << "\n"; }
void    out(vector<int> v)                      { for(auto it: v){ cout << it << " "; } cout << "\n"; }
void    out(vector<string> v)                   { for(auto it: v){ cout << it << " "; } cout << "\n"; }

//_______________________________________________________________________________________________

void solve() {
    ll n; string s; in(n, s);

    ll av = 0, ned = 0;
    vi arr(n+1, 0);
    ll l = 0, r = n-1;

    if(n == 1) {
        cout << 1 << 1 << endl; return;
    }

    while(l != r && l < r) {
        if(s[l] != s[r]) {
            ned++;
        } else {
            av += 2;
        }
        l++; r--;
    }

    if((n & 1) && (s[l] == '0' || s[l] == '1')) { av++; }

    // out(ned, av);

    for(int i=0; i<=n; i++) {
        if(i < ned) {
            arr[i] = 0;
        } else if(i == ned) {
            arr[i] = 1;
        } else {
            ll x = i - ned;

            if((n & 1) && (x & 1) && (x <= av)) {
                arr[i] = 1;
            } else if((x <= av) && !(x & 1)){
                arr[i] = 1;
            }
        }
    }

    out(arr);
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