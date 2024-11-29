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
    ll n, k; in(n, k);
    vector<ll> p_sum(n+1, 0);

    for(int i=(n-k)+1; i<=n; i++) {
        cin >> p_sum[i];
    }

    if(n == 1 || k == 1) {
        out("Yes");
        return;
    }

    vector<ll> v(n+1);
    for(int i=n; i>=(n-k)+2; i--) {
        v[i] = p_sum[i] - p_sum[i-1];
    }

    bool bl = false;

    for(int i=(n+k)+2; i<=n; i++) {
        if(i+1<=n && v[i+1] < v[i]) {
            bl = true;
            break;
        }
    }

    if(bl) { out("No"); return; }

    for(int i=(n-k)+1; i>1; i--) {
        v[i] = v[i+1];
        p_sum[i-1] = p_sum[i] - v[i];
    }
    v[1] = p_sum[1];

    for(int i=1; i<=n; i++) {
        if(i+1<=n && v[i+1] < v[i]) {
            bl = true;
            break;
        }
    }

    if(bl) { out("No"); } else { out("Yes"); }
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