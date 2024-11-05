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
    ll l; cin >> l;
    string a, b; cin >> a >> b;
    ll cnt = 0, chf = 0, s = 0;

    for(int i=0; i<l; i++) {
        if(a[i] == 'R') {
            if(b[i] == 'S') { chf++; }
            else if(b[i] == 'P') { cnt++; }
        } else if(a[i] == 'S') {
            if(b[i] == 'P') { chf++; }
            else if(b[i] == 'R') { cnt++; }
        } else if(a[i] == 'P') {
            if(b[i] == 'R') { chf++; }
            else if(b[i] == 'S') { cnt++; }
        }
    }


    if(chf >= cnt) {
        out(0);
    } else {
        out(cnt - chf);
    }

    // cout << chf << " " << cnt << endl;
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