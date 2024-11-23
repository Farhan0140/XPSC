#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout<<x<<"\n";
#define inv(v) for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//_______________________________________________________________________________________________

void solve() {
    ll n; cin >> n;
    vector<ll> v(n), pre(n);
    inv(v);
    string s; cin >> s;

    pre[0] = v[0];
    for(int i=1; i<n; i++) {
        pre[i] = pre[i-1] + v[i];
    }

    ll sum = 0, R = n-1;
    for(int i=0; i<n; i++) {
        if(s[i] == 'L') {
            while(R > i && s[R] != 'R') {
                R--;
            }

            if(R > i) {
                if(i > 0) {
                    sum += pre[R] - pre[i-1];
                    R--;
                } else {
                    sum += pre[R];
                    R--;
                }
            }
        }
    }

    out(sum);
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