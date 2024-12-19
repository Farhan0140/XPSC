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

ll row_chk(vector<vector<char>> arr, ll x, char ch) {
    ll cnt = 0;
    for(int i=0; i<8; i++) {
        if(arr[i][x] == ch) { cnt++; }
    }

    return cnt;
}

ll col_chk(vector<vector<char>> arr, ll x, char ch) {
    ll cnt = 0;
    for(int i=0; i<8; i++) {
        if(arr[x][i] == ch) { cnt++; }
    }

    return cnt;
}


void solve() {
    vector<vector<char>> arr(9, vector<char>(8));

    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            cin >> arr[i][j];
        }
    }

    char ans;

    for(int i=0; i<8; i++) {
        if(arr[0][i] == 'B') {
            ll x = row_chk(arr, i, 'B');
            if(x == 8) {
                ans = 'B';
            }
        }
    }

    for(int i=0; i<8; i++) {
        if(arr[i][0] == 'R') {
            ll x = col_chk(arr, i, 'R');
            if(x == 8) {
                ans = 'R';
            }
        }
    }

    out(ans);
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