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
    ll t; cin >> t; ll arr[t+5];
    vector<ll> ans;

    for(int i=1; i<=t; i++) {
        cin >> arr[i];
    }

    for(int i=1; i<=t; i++) {
        ll n; cin >> n;
        string s; cin >> s;
        ll st = arr[i];

        for(int j=0; j<n; j++) {
            if(st == 10 && s[j] == 'D') { 
                st = 0; 
            }
            else if(st == 0 && s[j] == 'U') {
                st = 10;
            }

            if(s[j] == 'D') { st = abs(st+1); }
            else if(s[j] == 'U') { st = abs(st-1); }
        }

        if(st == 10) {
            ans.push_back(0);
        } else {
            ans.push_back(st);
        }
    }

    for(auto it: ans) {
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