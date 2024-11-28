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
    ll n; in(n);
    vector<ll> v(n);

    ll e=0, mx_e=0, mx_o=0;
    bool all_e = true, all_o = true;

    for(auto &it: v) {
        cin >> it;

        if(it&1) {
            mx_o = max(mx_o, it);
            all_e = false;
        } else {
            e++;
            mx_e = max(mx_e, it);
            all_o = false;
        }
    }

    sort(all(v));

    for(int i=0; i<n; i++) {
        if(v[i] % 2 == 0 && v[i] < mx_o) {
            mx_o += v[i];
        }
    }

    if(all_e || all_o) {
        out(0);
    } else if(mx_e < mx_o) {
        out(e);
    } else {
        out(e+1);
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