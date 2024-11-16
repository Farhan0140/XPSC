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
    ll n, k, d, cnt=0; cin >> n >> k >> d;
    ll ans = 0;
    vector<ll> arr(n);

    for(auto &it: arr) {
        cin >> it;
    }

    for(int i=0; i<n; i++) {
        if(arr[i] <= d) {
            cnt++;

            if(i == n-1 || arr[i+1] > d) {
                if(cnt >= k) {
                    ll x = (cnt-k) + 1;
                    ans += (x * (x + 1)) / 2;
                }
                cnt = 0;
            }
        }
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