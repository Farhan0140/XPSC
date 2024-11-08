#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout << x << "\n";
#define ina(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define inv(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//_______________________________________________________________________________________________

void solve() {
    ll l, t, q; cin >> l >> t >> q;
    vector<ll> T(t);

    for(int i=0; i<t; i++) {
        cin >> T[i];
    }
    sort(all(T));

    while(q--) {
        ll d; cin >> d;

        if(d < T[0]) {
            out(T[0] - 1);
        } else if(d > T.back()) {
            out(l - T.back());
        } else {
            auto it = lower_bound(all(T), d);

            ll left = 1, right = l;
            right = *it;
            left = *(--it);
            out((right-left)/2);
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