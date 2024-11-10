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
    ll l1, l2; cin >> l1 >> l2;
    vector<ll> arr1(l1), arr2(l2);

    for(int i=0; i<l1; i++) {
        cin >> arr1[i];
    }

    for(int i=0; i<l2; i++) {
        cin >> arr2[i];
    }

    ll cnt = 0, j = 0;

    for(int i=0; i<l2; i++) {
        ll f = arr2[i];

        while(arr1[j] < f) {
            cnt++; j++;
        }

        cout << cnt << " ";
    }
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    /*
    tc
    */
      solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________