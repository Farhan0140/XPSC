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
    ll n, c, h; cin >> n >> c >> h;
    priority_queue<ll> st, cr;

    for(int i=0; i<n; i++) {
        ll it; cin >> it;
        st.push(it);
    }
    for(int i=0; i<c; i++) {
        ll it; cin >> it;
        cr.push(it);
    }

    ll ans = 0;
    while(!st.empty() && !cr.empty()) {
        ans += min((cr.top() * h), st.top());
        st.pop(); cr.pop();
    }

    out(ans);
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