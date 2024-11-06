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
    ll l; cin >> l;
    vector<ll> v;
    vector<pair<ll, ll>> ans;

    for(int i=1; i<=l; i++) {
        v.push_back(i);
    }

    while(v.size() > 1) {
        ll len = v.size();

        ll x = v[len-1], y = v[len-2];
        v.pop_back(); v.pop_back();

        ll s = x+y;

        if(s%2 == 0) {
            v.push_back(s/2);
        } else {
            v.push_back((s/2)+1);
        }
        ans.push_back({x, y});
    }

    out(v.back());
    for(auto it: ans) {
        cout << it.first << " " << it.second << "\n";
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