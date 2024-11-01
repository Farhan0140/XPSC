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
    string s, s1=""; cin >> s;
    ll L=0, U=0;
    for(int i=s.length()-1; i>=0; i--) {
        if(s[i] == 'b') { L++; }
        if(s[i] == 'B') { U++; }
        
        if(s[i] != 'b' && s[i] != 'B') {
            if(U > 0 && isupper(s[i])) {
                U--;
                continue;
            }
            if(L > 0 && islower(s[i])) {
                L--;
                continue;
            }
            s1.push_back(s[i]);
        }
    }

    if(s1.empty()) {
        out(' ');
    } else {
        reverse(all(s1));
        out(s1);
    }
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc solve();
    return 0;
}
//_______________________________________________________________________________________________