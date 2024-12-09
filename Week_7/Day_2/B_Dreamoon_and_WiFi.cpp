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

bool check_kth_bit_on_or_off(int n, int k) { //-----> TC: O(1)
    return ((n>>k) & 1);
}


int On_bits(int n) {  //-------> TC: almost O(1)
    int cnt=0;
    for(int k=__lg(n); k>=0; k--) {
        if(check_kth_bit_on_or_off(n, k)) {
            cnt++;
        }
    }
    return cnt;
}
//_______________________________________________________________________________________________

void solve() {
    string s, s1; cin >> s >> s1;

    int _s=0, _s1=0, _un=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '+') { _s++; }
        if(s1[i] == '+') { _s1++; }
        if(s1[i] == '?') { _un++; }
    }

    int cnt = 0;

    for(int i=0; i<(1<<_un); i++) {
        int cnt_1 = On_bits(i);
        if(cnt_1 + _s1 == _s) {
            cnt++;
        }
    }

    cout << fixed << setprecision(12) << ((cnt *1.0)/(1 << _un)) << endl;
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