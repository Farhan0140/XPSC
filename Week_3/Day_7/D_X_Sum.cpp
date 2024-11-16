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

vector<vector<ll>> v(205, vector<ll>(205));
ll n, m;

//_______________________________________________________________________________________________

ll def(ll x, ll y) {
    ll sum = v[x][y], i = x+1, j = y-1;

    while(i >= 0 && j >= 0 && i < n && j < m) {
        sum += v[i][j];
        i++; j--;
    }

    i = x+1, j = y+1;
    while(i >= 0 && j >= 0 && i < n && j < m) {
        sum += v[i][j];
        i++; j++;
    }

    i = x-1, j = y-1;
    while(i >= 0 && j >= 0 && i < n && j < m) {
        sum += v[i][j];
        i--; j--;
    }

    i = x-1, j = y+1;
    while(i >= 0 && j >= 0 && i < n && j < m) {
        sum += v[i][j];
        i--; j++;
    }

    return sum;
}

void solve() {
    cin >> n >> m;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> v[i][j];
        }
    }

    ll mx = INT_MIN;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            ll x = def(i, j);
            mx = max(mx, x);
        }
    }

    out(mx);
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