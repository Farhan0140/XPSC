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
    ll n, chf, cnt=0; cin >> n >> chf;
    ll a[n], b[n];
    ina(a, 0, n);
    ina(b, 0, n);
    
    priority_queue<ll, vector<ll>, greater<ll>> v;

    for(int i=0; i<n; i++) {
        if(a[i] < b[i]) {
            v.push(abs(a[i]-b[i])+1);
        } else if(a[i] == b[i]) {
            v.push(1);
        } else if(a[i] > b[i]) {
            cnt++;
        }
    }

    while(chf > 0) {
        chf -= v.top();
        v.pop();
        if(chf >= 0) {
            cnt++;
        }
    }
    
    if((n/2) < cnt) {
        out("YES");
    } else {
        out("NO");
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