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
    vector<ll> arr(l+1), q, _1, _0;
    map<ll, ll> mp;

    for(int i=0; i<l; i++) {
        cin >> arr[i];
        q.push_back(arr[i]);
        mp[arr[i]] = i;
    }

    string s; cin >> s;

    for(int i=0; i<l; i++) {
        if(s[i] == '1') {
            _1.push_back(arr[i]);
        } else {
            _0.push_back(arr[i]);
        }
    }

    sort(all(arr), greater<int>());
    sort(all(_1), greater<int>());
    sort(all(_0), greater<int>());

    ll i;
    for(i=0; i<_1.size(); i++) {
        ll idx = mp[_1[i]];
        q[idx] = arr[i];
    }
    for(int j=0; j<_0.size(); j++) {
        ll idx = mp[_0[j]];
        q[idx] = arr[i];
        i++;
    }

    for(auto it: q) {
        cout << it << " ";
    }
    cout << endl;
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