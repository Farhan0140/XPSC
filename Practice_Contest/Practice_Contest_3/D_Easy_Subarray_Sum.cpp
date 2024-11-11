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
    ll l; cin >> l;
    ll arr[l], cnt=0;
    ll _1 = -1, _2 = -1;

    for(int i=0; i<l; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<l; i++) {
        if(arr[i] > 0) {
            _2 = i;

            if(_1 == -1) {
                _1 = i;
            }
        }
    }

    if(_1 != _2) {
        for(int i=_1; i<=_2; i++) {
            if(arr[i] < 0) {
                cnt++;
            }
        }
    }

    if(_1 == _2) {
        out(0);
    } else {
        out(cnt);
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