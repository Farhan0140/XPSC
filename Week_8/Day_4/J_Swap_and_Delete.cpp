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

//_______________________________________________________________________________________________

void solve() {
    string s; in(s);
    ll _1=0, _0=0;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == '1') { _1++; } else { _0++; }
    }

    for(int i=0; i<s.length(); i++) {
        if(s[i] == '1' && _0 > 0) { 
            _0--; 
        } else if(s[i] == '0' && _1 > 0){ 
            _1--; 
        } else {
            break;
        }
    }

    out((_1 + _0));
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