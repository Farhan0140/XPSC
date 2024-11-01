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
    ll r, w; cin >> r >> w;
    ll arr[r+5];
    ll lose = 0, wins = 0;

    for(int i=1; i<=r; i++) {
        arr[i] = pow(2, i);
    }

    // for(int i=1; i<=r; i++) {
    //     cout << arr[i] << " ";
    // }
    // return;

    for(int i=1; i<=r-w; i++) {
        lose += arr[i];
    }
     while(w--) {
        wins += arr[r];
        r--;
     }

    //  out(wins);
    //  out(lose);

    out(abs(wins-lose));
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________