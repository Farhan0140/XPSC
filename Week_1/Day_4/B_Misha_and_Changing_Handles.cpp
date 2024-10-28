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

    map<string, string> New, old;

    for(int i=0; i<t; i++) {
        string s, s1; cin >> s >> s1;

        if(old.find(s) != old.end()) {
            string h = old[s];
            New[h] = s1;

            old.erase(s);
            old[s1] = h;
        } else {
            New[s] = s1;
            old[s1] = s;
        }
    }

    out(New.size());
    for(auto [x, y] : New) {
        cout << x << " " << y << endl;
    }
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________