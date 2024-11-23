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

bool is_int(double x) {
    if(floor(x) == x) {
        return true;
    } else {
        return false;
    }
}
//_______________________________________________________________________________________________

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> fr(n), hi(n);
    inv(fr);
    inv(hi);

    ll l = 0, r = 0, sum = 0, mx = 0, len = 0;

    while(r < n) {
        if(r+1 == n || is_int((hi[r] * 1.0) / (hi[r+1] * 1.0))) {
            sum += fr[r];
            len++;

            if(sum <= k) {
                mx = max(mx, len);
            }
                while(sum > k && l <= r) {
                    sum -= fr[l];
                    l++;
                    len--;
                }
            
        } else {
            l = r+1;

            if(sum + fr[r] <= k) {
                len++;
                mx = max(mx, len);
            }

            sum = 0;
            len = 0;
        }
        r++;
    }

    out(mx);
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