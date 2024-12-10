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
    int n; cin >> (n);
    int mx = __lg(n)+1;
    
    vector<int> ans(31, 0);
    for(int i=0; i<mx; i++) {
        if((n >> i) & 1) {
            if(ans[i]) {
                ans[i+1] = 1;
                ans[i] = 0;
            } else if(i > 0) {
                if(ans[i-1]) {
                    ans[i-1] = -1;
                    ans[i+1] = 1;
                } else {
                    ans[i] = 1;
                }
            } else if(i == 0) {
                ans[i] = 1;
            }
        }
    }

    int pos;
    for(int i=31; i>=0; i--) {
        if(ans[i] == 1) {
            pos = i; break;
        }
    } 

    out(pos+1);
    for(int i=0; i<=pos; i++) {
        cout << ans[i] << " ";
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