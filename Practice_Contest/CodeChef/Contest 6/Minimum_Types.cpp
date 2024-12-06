#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int         mod = 1e9 + 7;
#define pi          3.141592653
#define ll          long long int
#define all(x)      x.begin(),x.end()
#define out(x)      cout<<x<<"\n"
#define inv(v)      for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x)               { cin >> x; }
void in(ll &x, ll &y)        { cin >> x >> y; }
void in(ll &x, string &y)    { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }

//_______________________________________________________________________________________________

void solve() {
    ll n, k, cnt=0; in(n, k);
    vector<ll> v(n), v1(n);

    inv(v);
    inv(v1);

    for(int i=0; i<n; i++) {
        v[i] = v[i] * v1[i];
    }

    sort(v.rbegin(), v.rend());

    while(cnt < n && k > 0) {
        k -= v[cnt];
        cnt++;
    }

    (k <= 0)? out(cnt): out(-1);
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