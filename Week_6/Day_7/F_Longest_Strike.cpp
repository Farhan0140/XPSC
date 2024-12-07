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
    ll n, k; in(n, k);
    vector<ll> v(n);
    map<ll, int> mp;

    for(int i=0; i<n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    sort(all(v));

    ll l = -1, r = -1;
    ll L = -1, R = -1;

    for(int i=0; i<n; i++) {
        if(mp[v[i]] < k) { continue; }

        if(l == -1) {
            l = v[i];
        }

        if(i == n-1 || v[i+1]-v[i] > 1 || mp[v[i+1]] < k) {
            r = v[i];

            if(r - l >= R - L) {
                R = r;
                L = l;
            }

            l = -1; r = -1;
        }
    }

    (L == -1)? out(-1): cout << L << " " << R << endl;
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