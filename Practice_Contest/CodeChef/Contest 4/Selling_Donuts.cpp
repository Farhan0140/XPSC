#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout << x << "\n";
#define ina(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define inv(v) for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//_______________________________________________________________________________________________

void solve() {
    ll n, k; cin >> n >> k;
    multiset<ll> mt;
    vector<ll> a(n), b(k);

    inv(a);
    inv(b);

    ll cnt = 0;

    for(int i=0; i<k; i++) {
        if(a[b[i]-1] > 0) {
            --a[b[i]-1];
        } else {
            cnt++;
        }
    }

    // for(auto it : a) {
    //     cout << it << " ";
    // }
    // cout << endl;

    out(cnt);
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