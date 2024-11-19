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
    vector<ll> arr(n);
    inv(arr);

    ll l = 0, r = 0, mx_len = 0; 
    map<int, int> cnt;

    while(r < n) {
        cnt[arr[r]]++;
        if(cnt.size() <= k) {
            mx_len += r-l + 1;
        } else {
            while(cnt.size() > k) {
                cnt[arr[l]]--;

                if(cnt[arr[l]] == 0) {
                    cnt.erase(arr[l]);
                }
                l++;
            }
            mx_len += r-l + 1;
        }

        r++;
    }

    out(mx_len);
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