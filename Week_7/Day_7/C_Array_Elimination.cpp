#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int                                    mod = 1e9 + 7;
#define pi                                     3.141592653
#define ll                                     long long int
#define vi                                     vector<ll>
#define all(x)                                 x.begin(),x.end()
#define out(x)                                 cout<<x<<"\n"

void    in(ll &x)                              { cin >> x; }
void    in(ll &x, ll &y)                       { cin >> x >> y; }
void    in(ll &x, ll &y, ll &z)                { cin >> x >> y >> z; }
void    in(ll &x, ll &y, ll &z, ll &a)         { cin >> x >> y >> z >> a; }
void    in(ll &x, string &y)                   { cin >> x >> y; }
void    in(ll &x, string &y, string &z)        { cin >> x >> y >> z; }
void    in(string &x, string &y)               { cin >> x >> y; }
void    in(string &x, string &y, string &z)    { cin >> x >> y >> z; }
void    in(vector<ll> &v) { for(auto &it: v)   { cin >> it; }}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//_______________________________________________________________________________________________

void solve() {
    ll n; in(n);
    vi arr(n);
    for(auto &it: arr)   { cin >> it; }
    vi cnt_bits(33, 0), ans;

    for(int k=0; k<33; k++) {
        for(int i=0; i<n; i++) {
            if(((arr[i] >> k) & 1)) {
                cnt_bits[k]++;
            }
        }
    }

    ll _1 = 0;
    for(auto it: cnt_bits)   { if(it > 0) { _1++; }; }

    for(int k=1; k<=n; k++) {
        ll cnt = 0;
        for(int i=0; i<33; i++) {
            if(cnt_bits[i] > 0 && cnt_bits[i] % k == 0) {
                cnt++;
            }
        }

        if(cnt == _1) {
            ans.push_back(k);
        }
        // cout << cnt << " " << mx << endl;
    }

    for(auto it: ans)   { cout << it << " "; } cout << endl;
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