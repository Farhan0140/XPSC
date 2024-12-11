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
    string s; cin >> s;
    ll len = s.length();

    ll ans = (1 << len) - 2, cnt = 0;

    for(int i=len-1; i>=0; i--) {
        if(s[i] == '7') {
            ans += (1 << cnt);
        }

        cnt++;
    }

    out(ans + 1);
}

//_______________________________________________________________________________________________


int main(){
    IOS;
    /*
    tc
    */
      solve();
    return 0;
}


//_______________________________________________________________________________________________