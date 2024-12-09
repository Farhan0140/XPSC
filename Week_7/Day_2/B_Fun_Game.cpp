#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int         mod = 1e9 + 7;
#define pi          3.141592653
#define ll          long long int
#define all(x)      x.begin(),x.end()
#define out(x)      cout<<x<<"\n"

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x)               { cin >> x; }
void in(ll &x, ll &y)        { cin >> x >> y; }
void in(ll &x, string &y)    { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }
void in(vector<ll> &v) { for(auto &it: v){ cin >> it; }}

//_______________________________________________________________________________________________

void solve() {
    ll n; in(n);
    string s, t; cin >> s >> t;

    if(s == t) {
        out("YES"); return;
    }

    ll pos = -1;
    for(int i=0; i<n; i++) {
        if(s[i] == '1') { pos = i; break; }
    }

    if(pos != -1) {
        bool bl = false;
        for(int i=0; i<n; i++) {
            if(s[i] != t[i]) {
                if(pos > i) {
                    bl = true; break;
                }
            }
        }

        (bl)? out("NO"): out("YES");
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