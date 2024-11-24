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

//_______________________________________________________________________________________________

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);

    for(auto &it: v) {
        cin >> it;
    }

    ll x;
    bool bl = false;

    for(int i=0; i<=256; i++) {
        ll xor_b = 0;

        for(int j=0; j<n; j++) {
            xor_b ^= (v[j] ^ i);
        }

        if(xor_b == 0) {
            x = i;
            bl = true;
            break;
        }
    }

    if(bl) {
        out(x);
    } else {
        out(-1);
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