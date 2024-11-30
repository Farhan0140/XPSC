#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout<<x<<"\n";
#define inv(v) for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x) { cin >> x; }
void in(ll &x, ll &y) { cin >> x >> y; }
void in(ll &x, string &y) { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }

//_______________________________________________________________________________________________

void solve() {
    string s; cin >> s;
    ll l = s.length();

    bool _1 = false, _2 = false;

    for(int i=0; i<l; i++) {
        if(s.substr(i, 2) == ")(") {
            _2 = true;
        }
        if(s.substr(i, 2) == "()") {
            _1 = true;
        }
    }

    if(_1 && l == 2) { out("NO") }
    else {
        out("YES")
        if(_2) {
            for(int i=0; i<l; i++) {
                cout << "(";
            }
            for(int i=0; i<l; i++) {
                cout << ")";
            }
        } else {
            for(int i=0; i<l; i++) {
                cout << "()";
            }
        }
        cout << endl;
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