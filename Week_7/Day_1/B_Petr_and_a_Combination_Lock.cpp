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

void All_Combinations(vector<ll> arr, int n) {
    bool bl = false;
    for(int mask=0; mask<(1 << n); mask++) {
        ll sum = 0;
        for(int k=0; k<n; k++) {
            int x = k;
            if((mask >> k) & 1) {
                sum += arr[x];
            } else {
                sum -= arr[x];
            }
        }
        if(sum % 360 == 0) {
            bl = true;
            break;
        }
    }

    if(bl) {
        out("YES");
    } else {
        out("NO");
    }
}

//_______________________________________________________________________________________________


int main(){
    IOS;
    ll n; in(n);
    vector<ll> v(n);
    in(v);
    All_Combinations(v, n);
    return 0;
}


//_______________________________________________________________________________________________