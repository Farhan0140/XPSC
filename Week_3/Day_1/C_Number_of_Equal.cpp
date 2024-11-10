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
    ll l=0, r=0, ans = 0;

    for(int i=0; i<l1; i++) {
        cin >> arr1[i];
    }

    for(int i=0; i<l2; i++) {
        cin >> arr2[i];
    }

    while(l < l1 && r < l2) {
        ll curr = arr1[l], cnt_1 = 0, cnt_2 = 0;

        while(l < l1 && arr1[l] == curr) {
            cnt_1++; l++;
        }

        while(r < l2 && curr > arr2[r]) {
            r++;
        }

        while(r < l2 && arr2[r] == curr) {
            cnt_2++; r++;
        }

        ans += (cnt_1 * cnt_2);
    }

    out(ans);
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