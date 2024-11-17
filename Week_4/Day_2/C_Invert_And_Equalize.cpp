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
    ll len;         cin >> len;
    string s;       cin >> s;

    ll l = 0, r = 0;
    ll cnt_1 = 0;

    while(r < len) {
        if(s[r] == '1' && s[l] == '0') {
            l = r;
        }
        if(s[l] == '1' && s[r] == '0') {
            cnt_1++;
            l = r+1;
        }
        if(r+1 >= len && s[l] == '1') {
            cnt_1++;
        }
        r++;
    }

    l = 0, r = 0;
    ll cnt_0 = 0;

    while(r < len) {
        if(s[r] == '0' && s[l] == '1') {
            l = r;
        }
        if(s[l] == '0' && s[r] == '1') {
            cnt_0++;
            l = r+1;
        }
        if(r+1 >= len && s[l] == '0') {
            cnt_0++;
        }
        r++;
    }

    if(cnt_0 == 0 || cnt_1 == 0) {
        out(0);
    } else {
        out(min(cnt_0, cnt_1));
    }
    // out(cnt_0);
    // out(cnt_1);
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