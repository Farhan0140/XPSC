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
    char ch; cin >> ch;
    string s; cin >> s;

    if(ch == 'g') {
        out(0); return;
    }

    bool bl = false;
    ll cnt = 0, res = 0;
    s += s;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'g') {
            res = max(res, cnt);
            bl = false;
        }
        if(s[i] == ch && !bl) {
            bl = true;
            cnt = 0;
        }

        if(bl) { cnt++; }
    }

    out(res);
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