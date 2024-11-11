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
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    int w=0, mn;

    for(int i=0; i<k; i++) {
        if(s[i] == 'W') {
            w++;
        }
    }

    mn = w;

    for(int i=k; i<n; i++) {
        if(s[i] == 'W') {
            w++;
        }
        if(s[i-k] == 'W') {
            w--;
        }

        mn = min(mn, w);
    }

    out(mn);
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