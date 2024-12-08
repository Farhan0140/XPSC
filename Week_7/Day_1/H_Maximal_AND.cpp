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
    ll n, x; in(n, x);
    vector<ll> v(n);
    in(v);
    ll arr[31] = {0};

    for(int i=0; i<n; i++) {
        for(int k=30; k>=0; k--) {
            if((v[i] >> k) & 1) {
                arr[k]++;
            }
        }
    }

    ll sum = 0;
    for(int i=30; i>=0; i--) {
        if(arr[i] == n) {
            sum += (1LL << i);
        } else {
            ll ned = n - arr[i];

            if(ned <= x) {
                sum += (1LL << i);
                x -= ned;
            }
        }
    }

    out((sum));
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

/*
4 --> 0 0 1 0 0 
6 --> 0 0 1 1 0 
6 --> 0 0 1 1 0 
28--> 1 1 1 0 0 
6 --> 0 0 1 1 0 
6 --> 0 0 1 1 0 
12--> 0 1 1 0 0 
*/