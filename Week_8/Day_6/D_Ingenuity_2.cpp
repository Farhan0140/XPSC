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
    ll n; string s; in(n, s); 
    ll x=0, y=0;
    set<char> st;

    for(int i=0; i<n; i++) {
        st.insert(s[i]);

        if(s[i] == 'N') {
            y++;
        } else if(s[i] == 'S') {
            y--;
        } else if(s[i] == 'E') {
            x++;
        } else if(s[i] == 'W') {
            x--;
        }
    }

    if(x == 0 && y == 0 && n == 2) { out("NO"); return; }

    map<char, ll> mp;
    
    if(x % 2 == 0 && y % 2 == 0) {
        for(int i=0; i<n; i++) {
            mp[s[i]]++;
        }

        if(n == 4 && st.size() == 4) {
            for(int i=0; i<n; i++) {
                if(s[i] == 'W') {
                    cout << "H";
                } else if(s[i] == 'E') {
                    cout << "H";
                } else {
                    cout << "R";
                }
            }
            out(); return;
        }

        map<char, ll> tmp;

        for(int i=0; i<n; i++) {
            tmp[s[i]]++;

            if(tmp[s[i]] <= mp[s[i]] / 2) {
                cout << "H";
            } else {
                cout << "R";
            }
        }

        out();
    } else {
        out("NO");
    }
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