#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout << x << "\n";
#define pb push_back
#define rep(a,b) for(int i=a; i<b; ++i)
#define rev(a,b) for (int i=a; i>b; --i)
#define sz size()
#define ina(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define inv(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//_______________________________________________________________________________________________

void solve() {
    ll l; cin >> l;
    map<ll, ll> freq;

    for(int i=0; i<l; i++) {
        ll x; cin >> x;
        freq[x]++;
    }

    priority_queue<ll> pq;

    for(auto[key, val]: freq) {
        pq.push(val);
    }

    while(!pq.empty()) {
        if(pq.size() < 2) { break; }

        ll _1st, _2nd;
        _1st = pq.top(); pq.pop();
        _2nd = pq.top(); pq.pop();

        _1st--; _2nd--;

        if(_1st > 0) { pq.push(_1st); }
        if(_2nd > 0) { pq.push(_2nd); }
    }

    ll ans = 0;

    while(!pq.empty()) {
        ans += pq.top(); pq.pop();
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