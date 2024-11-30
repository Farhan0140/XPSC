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
    map<ll, ll> freq;
    ll mx_freq = 0;
    for(int i=0; i<n; i++) {
        ll x; in(x);
        freq[x]++;

        mx_freq = max(mx_freq, freq[x]);
    }

    ll mn_op = 0;

    while(mx_freq < n) {
        ll rem = n - mx_freq;
        ll from_cpy = mx_freq;
        mn_op++;
        mn_op += min(rem, from_cpy);
        mx_freq += min(rem, from_cpy);
    }

    out(mn_op);
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