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

void in(ll &x) { cin >> x; }
void in(ll &x, ll &y) { cin >> x >> y; }
void in(ll &x, string &y) { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }

//_______________________________________________________________________________________________

void solve() {
    ll n, m; in(n,m);
    vector<ll> v(n);

    if(n > m) {
        out("No");
        return;
    } else if(n%2 == 0 && m%2 == 1) {
        out("No");
        return;
    } 
    ll sum = 0;
    
    if(n%2 == 0 && m%2 == 0){
        out("Yes");
        for(int i=0; i<n-2; i++) {
            v[i] = 1;
            sum++;
        }

        v[n-2] = (m-sum) / 2;
        v[n-1] = v[n-2];

        for(auto it: v) { cout << it << " "; }
        cout << endl;
        return;
    }

    if(n%2 == 1 && m%2 == 1){
        out("Yes");
        for(int i=0; i<n-1; i++) {
            v[i] = 1;
            sum++;
        }

        v[n-1] = (m-sum);

        for(auto it: v) { cout << it << " "; }
        cout << endl;
        return;
    }

    if(n%2 == 1 && m%2 == 0){
        out("Yes");
        for(int i=0; i<n-1; i++) {
            v[i] = 1;
            sum++;
        }

        v[n-1] = (m-sum);

        for(auto it: v) { cout << it << " "; }
        cout << endl;
        return;
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