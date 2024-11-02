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
    bool bl = false;
    ll arr[n];

    ina(arr, 0, n);

    for(int i=0; i<n-1; i++) {
        ll x = abs(arr[i] - arr[i+1]);
        if(x != 5) {
            if(x != 7) {
                bl = true;
            }
        } else if(x != 5) {
            bl = true;
        }
    }

    if(bl) { out("NO"); } else { out("YES"); }
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc
      solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________