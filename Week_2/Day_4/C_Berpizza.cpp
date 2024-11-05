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
    set<pair<ll, ll>> st;
    multiset<pair<ll, ll>> ms;
    vector<ll> ans;
    ll customerPos = 1;

    while(n--) {
        ll type; cin >> type;
        
        if(type == 1) {
            ll money; cin >> money;
            st.insert({customerPos, money});
            ms.insert({money, -customerPos});

            customerPos++;
        } else if(type == 2) {
            ll pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);

            st.erase(st.begin());
            ms.erase({money, -pos});
        } else {
            ll pos = -ms.rbegin()->second, money = ms.rbegin()->first;
            ans.push_back(pos);

            st.erase({pos, money});
            ms.erase(--ms.end());
        }
    }

    for(auto it: ans) {
        cout << it << " ";
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