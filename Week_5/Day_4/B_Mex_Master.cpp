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

    ll z=0, nz=0;

    for(auto &it: v) {
        cin >> it;
        (it == 0)? z++ : nz++;
    }

    if(z == 0) {
        out(z);
    } else {
        if(nz >= z-1) {
            out(0);
        } else {
            if(*max_element(all(v)) == 1) {
                out(2);
                return;
            } else {
                out(1);
                return;
            }
        }
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