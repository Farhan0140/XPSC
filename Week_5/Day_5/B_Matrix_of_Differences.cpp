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
    ll x = 1, y = n*n;
    vector<ll> v;

    for(int i=1; i<=n*n; i++) {
        if(i&1) {
            v.push_back(x); x++;
        } else {
            v.push_back(y); y--;
        }
    }
    x = 0;
    for(int i=1; i<=n; i++) {
        if(i&1) {
            for(int j=x; j<x+n; j++) {
                cout << v[j] << " ";
            }
            x += n;
            cout << endl;
        } else {
            for(int j=(x+n)-1; j>=x; j--) {
                cout << v[j] << " ";
            }
            x += n;
            cout << endl;
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