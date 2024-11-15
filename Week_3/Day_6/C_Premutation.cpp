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
    ll n; cin >> n;
    ll arr[n][n-1];
    map<int, int> mp;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            cin >> arr[i][j];

            if(j == n-2) {
                mp[arr[i][j]]++;
            }
        }
    }

    ll _1, _2;

    for(auto it: mp) {
        if(it.second == 1) {
            _1 = it.first;
        } else {
            _2 = it.first;
        }
    }
    
    vector<ll> v;

    for(int i=0; i<n; i++) {
        if(arr[i][n-2] == _1) {
            for(int j=n-2; j>=0; j--) {
                v.push_back(arr[i][j]);
            }
        }
    }

    reverse(all(v));

    for(auto it: v) {
        cout << it << " ";
    }

    cout << _2 << "\n";
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