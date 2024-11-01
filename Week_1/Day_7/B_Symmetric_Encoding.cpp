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
    ll t; cin >> t;
    string s, r=""; cin >> s;
    map<char, char> mp;
    set<char> st;

    for(int i=0; i<t; i++) {
        st.insert(s[i]);
    }

    if(st.size() > 1) {
        for(auto it: st) { r+=it; }

        ll l=0, h=r.length() - 1;

        while(l != h && l < h) {
            mp[r[l]] = r[h];
            mp[r[h]] = r[l];

            l++; h--;

            if(l == h) {
                mp[r[l]] = r[l];
            }
        }

        for(int i=0; i<t; i++) {
            auto it = mp.find(s[i]);
            s[i] = it->second;
        }

        out(s);
    } else {
        out(s);
    }
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________