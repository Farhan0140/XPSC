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
    ll n; cin >> n;
    ll arr[n+1];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    map<ll, ll> mp;
    vector<ll> v;
    for(int i=0; i<n; i++) {
        mp[arr[i]]++;

        if(mp[arr[i]] <= 1) {
            v.push_back(mp.size());
        } else {
            ll value = arr[i];

            while(true) {
                if(mp[value] <= 1) {
                    break;
                }
                
                if(mp[value] >= 2) {
                    ll val = value*2;
                    mp.erase(value);
                    mp[val]++;
                    value = val;
                }
            }

            v.push_back(mp.size());
        }
    }

    for(auto it: v) {
        cout << it << " ";
    }

    cout << endl;
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc
      solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________