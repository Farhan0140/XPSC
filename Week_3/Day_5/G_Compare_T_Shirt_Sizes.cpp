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
    string s, s1; cin >> s >> s1;

    ll _1=1, _2=1;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') { _1++; }
    }
    for(int i=0; i<s1.length(); i++) {
        if(s1[i] == 'X') { _2++; }
    }

    if(s.back() == 'S') { _1 *= -1; }
    else if(s.back() == 'M') { _1 = 0; }
    else { _1 *= 1; }

    if(s1.back() == 'S') { _2 *= -1; }
    else if(s1.back() == 'M') { _2 = 0; }
    else { _2 *= 1; }

    if(_1 == _2) {
        out("=");
    } else if(_1 < _2) {
        out("<");
    } else {
        out(">");
    }
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