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
    ll n, s; cin >> n >> s;
    vector<ll> arr(n);

    for(auto &it: arr) {
        cin >> it;
    }

    ll l=0, r=0, seg=0;
    multiset<ll> ms;

    while(r < n) {
        ms.insert(arr[r]);
        ll mn = *ms.begin(), mx = *ms.rbegin();

        if(mx - mn <= s) {
            seg += r-l + 1;
        } else {
            while(l <= r) {
                if(*ms.rbegin() - *ms.begin() <= s) {
                    break;
                }

                ms.erase(ms.find(arr[l]));
                l++;
            }

            if(*ms.rbegin() - *ms.begin() <= s) {
                seg += r-l + 1;
            }
        }
        r++;
    }

    out(seg);
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