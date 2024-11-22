#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) (x=="\n")?cout<<"\n":cout<<x<<"\n";
#define inv(v) for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//_______________________________________________________________________________________________

void solve() {
    ll n, s, x = 1; cin >> n; s = n;
    n = (n* (n-1)) / 2;
    vector<ll> v(n), ans;
    inv(v);
    sort(all(v));

    for(int i=0; i<n; i++) {
        x++;
        ans.push_back(v[i]);
        i += s - x;
    }

    ans.push_back(1000000000);
    for(auto it: ans) {
        cout << it << " ";
    }
    out("\n");
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