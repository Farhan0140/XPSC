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
    ll t; cin >> t;
    vector<ll> v(t);

    ll sum = 0;
    for(auto &it: v) {
        cin >> it;
        sum += abs(it);
    }

    ll l=0, r=0, cnt=0;
    while(r < t) {
        if(v[r] >= 1) {
            if(v[l] != 0 && v[l] < 0) {
                cnt++;
            }
            l = r+1;
        }
        if(l < t && v[l] == 0) {
            l++;
        }
        r++;
    }

    if(l < t && v[l] != 0 && v[l] < 0) {
        cnt++;
    }

    cout << sum << " " << cnt << '\n';
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