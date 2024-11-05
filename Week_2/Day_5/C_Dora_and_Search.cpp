#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout << x << "\n";
#define pb push_back
#define rep(a,b) for(int i=a; i<b; ++i)
#define rev(a,b) for (int i=a; i>b; --i)
#define sz size()
#define ina(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define inv(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

//_______________________________________________________________________________________________

void solve() {
    ll n; cin >> n;
    vector<ll> v(n+5);

    for(int i=1; i<=n; i++) {
        cin >> v[i];
    }

    ll mn = 1, mx = n, l = 1, r = n;

    while(l <= r) {
        if(v[l] == mn) {
            l++; mn++;
        } else if(v[r] == mn) {
            mn++; r--;
        } else if(v[l] == mx) {
            mx--; l++;
        } else if(v[r] == mx) {
            mx--; r--;
        } else {
            break;
        }
    }

    if(l <= r) {
        cout << l << " " << r << endl;
    } else {
        out(-1);
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