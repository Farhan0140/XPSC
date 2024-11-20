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
    ll n, s; cin >> n >> s;
    vector<ll> arr(n);

    inv(arr);
    ll l=0, r=0, cnt=0, sum=0;

    while(r < n) {
        sum += arr[r];

        if(sum >= s) {
            cnt++;

            if(r < n) {
                ll x = (n - r) - 1;

                if(x > 0) {
                    cnt += x;
                }
            }

            while(sum >= s) {
                sum -= arr[l];
                l++;

                if(sum >= s) {
                    cnt++;

                    if(r < n) {
                        ll x = (n - r) - 1;

                        if(x > 0) {
                            cnt += x;
                        }
                    }
                }
            }
        }
        r++;
    }

    out(cnt);
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