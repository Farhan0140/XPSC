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

//_______________________________________________________________________________________________

void solve() {
    ll n, m; in(n, m);

    if(n >= m && (n%2==0 && m%2==0)) {
        out("Yes");
    } else if(n >= m && (n%2==1 && m%2==1)) {
        out("Yes");
    } else {
        out("No");
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