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
    ll n, s; cin >> n >> s;
    vector<ll> v(n);
    ll sum = 0;
    for(auto &it: v) {
        cin >> it;
        sum += it;
    }

    if(sum < s) {
        out("-1");
    } else if(sum == s) {
        out(0);
    } else {
        sum = 0;
        ll cnt = 0, k;

        for(int i=0; i<n; i++) {
            sum += v[i];
            cnt++;

            if(sum == s) {
                k = i+1;
                break;
            }
        }

        ll mx_sub_array = cnt;
        ll ind=0;

        for(int i=k; i<n; i++) {
            ll j = i;

            while(j < n) {
                if(v[j] == 1) {
                    break;
                }

                cnt++; 
                mx_sub_array = max(mx_sub_array, cnt);
                j++;
            }

            i = j;
            sum++;

            while(ind < n) {
                if(v[ind] == 1) {
                    ind++;
                    break;
                }

                cnt--; 
                mx_sub_array = max(mx_sub_array, cnt);
                ind++;
            }
        }

        cout << (n - mx_sub_array) << "\n";
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