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
    ll n; in(n); vi arr(n); in(arr);

    ll _1 = 0, _1_inv = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == 1) {
            _1++;
        } else {
            _1_inv += _1;
        }
    }

    if(_1 == n) {
        arr.back() = 0;

        ll cnt = 0, _2_inv = 0;

        for(int i=0; i<n; i++) {
            if(arr[i] == 1) {
                cnt++;
            } else {
                _2_inv += cnt;
            }
        }

        out(max(_1_inv, _2_inv));
    } else {
        ll cnt = 0, type_1 = 0, type_2 = 0;

        vi cpy = arr;

        for(int i=0; i<n; i++) {
            if(arr[i] == 0) {
                arr[i] = 1; break;
            }
        }
        for(int i=0; i<n; i++) {
            if(arr[i] == 1) {
                cnt++;
            } else {
                type_1 += cnt;
            }
        }

        cnt = 0;

        for(int i=n-1; i>=0; i--) {
            if(cpy[i] == 1) {
                cpy[i] = 0; break;
            }
        }

        for(int i=0; i<n; i++) {
            if(cpy[i] == 1) {
                cnt++;
            } else {
                type_2 += cnt;
            }
        }

        out(max(_1_inv, max(type_1, type_2)));
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