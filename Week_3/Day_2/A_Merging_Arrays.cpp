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
    ll l1, l2; cin >> l1 >> l2;
    vector<ll> arr1(l1), arr2(l2), ans;
    
    for(int i=0; i<l1; i++) {
        cin >> arr1[i];
    }
    
    for(int i=0; i<l2; i++) {
        cin >> arr2[i];
    }
    
    ll l = 0, r = 0;
    
    while(l < l1 && r < l2) {
        if(arr1[l] < arr2[r]) {
            ans.push_back(arr1[l]);
            l++;
        } else if(arr2[r] < arr1[l]) {
            ans.push_back(arr2[r]);
            r++;
        } else {
            ans.push_back(arr1[l]);
            ans.push_back(arr2[r]);
            l++; r++;
        }
    }
    
    if(l >= l1) {
        while(r < l2) {
            ans.push_back(arr2[r]);
            r++;
        }
    }
    
    if(r >= l2) {
        while(l < l1) {
            ans.push_back(arr1[l]);
            l++;
        }
    }
    
    for(auto it: ans) {
        cout << it << " ";
    }
}

//_______________________________________________________________________________________________


int main(){
    IOS;
    // tc
      solve();
    return 0;
}


//_______________________________________________________________________________________________