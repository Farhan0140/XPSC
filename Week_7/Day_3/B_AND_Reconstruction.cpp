#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int         mod = 1e9 + 7;
#define pi          3.141592653
#define ll          long long int
#define all(x)      x.begin(),x.end()
#define out(x)      cout<<x<<"\n"

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x)               { cin >> x; }
void in(ll &x, ll &y)        { cin >> x >> y; }
void in(ll &x, string &y)    { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }
void in(vector<ll> &v) { for(auto &it: v){ cin >> it; }}

//_______________________________________________________________________________________________

void solve() {
    ll n; in(n);
    ll b[n+1], a[n+1];
    for(int i=1; i<n; i++) {
        cin >> b[i];
    }
    b[0] = 0;
    b[n] = 0;

    for(int i=1; i<=n; i++) {
        a[i] = b[i-1] | b[i];
    }

    bool bl = false;
    for(int i=1; i<n; i++) {
        if((a[i] & a[i+1]) != b[i]) {
            bl = true;
            break;
        }
    }

    if(bl){
        out(-1);
    } else {
        for(int i=1; i<=n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
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