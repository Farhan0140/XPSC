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
    ll ab = 0, ba = 0;
    string s; cin >> s;

    for(int i=0; i<t-1; i++) {
        if(s[i]=='a' && s[i+1]=='b') { ab++; }
        if(s[i]=='b' && s[i+1]=='a') { ba++; }
    }

    if(ab == ba) {
        out(t);
    } else {
        char chk1 = s[0], chk2 = s[t-1];
        ll ans1 = 0, ans2 = 0, x = 0;
        for(int i=0; i<t; i++) {
            if(s[i] != chk1) { x = i; break; }
        }
        ans1 = abs(t-x);

        reverse(all(s));
        for(int i=0; i<t; i++) {
            if(s[i] != chk2) { x = i; break; }
        }
        ans2 = abs(t-x);

        out(max(ans1, ans2));
    }
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc
      solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________