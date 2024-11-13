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
    ll f, s; cin >> f >> s;
    ll x = f * 10, y = f * 12;

    if (s >= x && s <= y){
        cout << "YES\n";
    } else {
        cout << "NO\n";
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