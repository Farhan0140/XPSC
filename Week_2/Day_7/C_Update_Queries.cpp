#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout << x << "\n";
#define ina(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define inv(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//_______________________________________________________________________________________________

void solve() {
    ll sl, q; cin >> sl >> q;
    string s; cin >> s;

    set<ll> st;
    multiset<char> st1;

    for(int i=0; i<q; i++) {
        ll x; cin >> x;
        st.insert(--x);
    }
    string c; cin >> c;

    for(int i=0; i<c.length(); i++) {
        st1.insert(c[i]);
    }

    while(!st.empty()) {
        ll idx = *st.begin(); 
        auto it = st1.begin();
        char ch = *it;

        s[idx] = ch;
        st.erase(idx);
        st1.erase(it);
    }

    out(s);
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