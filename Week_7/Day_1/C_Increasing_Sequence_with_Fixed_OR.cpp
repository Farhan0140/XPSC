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
    list<ll> ans;

    for(int i=0; i<=__lg(n); i++) {
        if((n >> i) & 1) {
            ll x = (n & (~(1LL << i)));
            if(x != 0) {
                ans.push_front(x);
            }
        }
    }

    ans.push_back(n);
    out(ans.size());
    for(auto it: ans) {
        cout << it << " ";
    }
    cout << endl;
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