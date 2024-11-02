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

bool cmp(pair<ll, ll> a, pair<ll, ll> b) { 
    return a.second < b.second; 
}

//_______________________________________________________________________________________________

void solve() {
    ll s, n; cin >> s >> n;

    map<ll, ll> mp;
    vector<pair<ll, ll>> v;

    for(int i=0; i<n; i++) {
        ll b, c; cin >> b >> c;
        mp[b] += c;
    }


    for(auto it: mp) {
        v.push_back({it.first, it.second});
    }
    
    sort(all(v), cmp);
    // for(auto it: v) {
    //     cout << it.first << " " << it.second << endl;
    // }
    
    ll mx = 0;

    for(int i=1; i<=s; i++) {
        ll x = v.back().second;
        mx += x;
        v.pop_back();
        
        if(v.empty()) { break; }
    }

    out(mx);
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc
      solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________