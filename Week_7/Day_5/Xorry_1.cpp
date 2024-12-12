#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const   int         mod = 1e9 + 7;
#define pi          3.141592653
#define ll          long long int
#define vi          vector<ll>
#define all(x)      x.begin(),x.end()
#define out(x)      cout<<x<<"\n"

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void    in(ll &x)                              { cin >> x; }
void    in(ll &x, ll &y)                       { cin >> x >> y; }
void    in(ll &x, ll &y, ll &z)                { cin >> x >> y >> z; }
void    in(ll &x, ll &y, ll &z, ll &a)         { cin >> x >> y >> z >> a; }
void    in(ll &x, string &y)                   { cin >> x >> y; }
void    in(ll &x, string &y, string &z)        { cin >> x >> y >> z; }
void    in(string &x, string &y)               { cin >> x >> y; }
void    in(string &x, string &y, string &z)    { cin >> x >> y >> z; }
void    in(vector<ll> &v) { for(auto &it: v)   { cin >> it; }}


int turn_off_kth_bit(int n, int k) { //-----> TC: O(1)
    return (n & (~(1 << k)));
}

//_______________________________________________________________________________________________

void solve() {
    ll n; in(n);

    ll lst_bit = __lg(n);
    ll _1 = turn_off_kth_bit(n, lst_bit);
    ll _2 = n - _1;

    cout << _1  << " " << _2 << "\n";
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