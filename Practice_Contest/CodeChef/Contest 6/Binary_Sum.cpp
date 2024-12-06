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
    ll n, k; in(n,k);
    string s = "", s1 = "";
    ll x=0, y=0;

    for(int i=0; i<n; i++) {
        if(i%2==0) {
            s+="1";
        } else {
            s1 += "1";
        }
    }

    for(int i=0; i<s.length(); i++) {
            x += s[i]-'0';
    }
    for(int i=0; i<s1.length(); i++) {
            y += s1[i]-'0';
    }

    if(x == k || y == k) {
        out("YES");
    } else {
        out("NO");
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