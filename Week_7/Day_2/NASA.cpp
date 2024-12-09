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

const int N = (1LL << 15);
vector<ll> AllPal;

bool is_pal(ll x) {
    string s = to_string(x);
    int l=0, r = s.length()-1;

    while(l != r && l < r) {
        if(s[l] != s[r]) {
            return false;
        }
        l++; r--;
    }

    return true;
}

void all_pal() {
    for(int i=0; i<N; i++) {
        if(is_pal(i)) {
            AllPal.push_back(i);
        }
    }
}

//_______________________________________________________________________________________________

void solve() {
    ll n; in(n);
    vector<ll> v(n), cnt(N+5);
    for(auto &it: v) {
        cin >> it;
        cnt[it]++;
    }

    ll ans = n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<AllPal.size(); j++) {
            int tmp = (v[i] ^ AllPal[j]);
            ans += cnt[tmp];
        }
    }

    out(ans/2);
}

//_______________________________________________________________________________________________


int main(){
    IOS;
    all_pal();
    /*
    */
    tc
      solve();
    return 0;
}


//_______________________________________________________________________________________________