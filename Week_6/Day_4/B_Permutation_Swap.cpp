#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout<<x<<"\n"
#define inv(v) for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x) { cin >> x; }
void in(ll &x, ll &y) { cin >> x >> y; }
void in(ll &x, string &y) { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }

ll GCD(ll a, ll b) {
    if(b == 0) return a;
    return GCD(b, (a%b));
}
//_______________________________________________________________________________________________

void solve() {
    ll n; in(n);
    vector<ll> v(n+1);

    for(int i=1; i<=n; i++) {
        cin >> v[i];
    }


    ll gcd = 0, ans = 0;

    for(int i=1; i<=n; i++) {
        ans = GCD(ans, abs(i-v[i]));
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