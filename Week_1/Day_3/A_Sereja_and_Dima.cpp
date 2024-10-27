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
    // vector<int> v;
    // inv(v, t);
    
    // ll cnt=1, S=0, D=0;
    
    // while(t--) {
    //     ll x = max(v.front(), v.back());

    //     if(cnt%2 != 0) {
    //         S += x; cnt++;

    //         if(x != v.back()) {
    //             v.erase(v.begin());
    //         } else {
    //             v.pop_back();
    //         }
    //     } else {
    //         D += x; cnt++;

    //         if(x != v.back()) {
    //             v.erase(v.begin());
    //         } else {
    //             v.pop_back();
    //         }
    //     }
    // }
    // cout << S << " " << D << endl;

    deque<int> v;
    for(int i=0; i<t; i++) {
        ll x; cin >> x;
        v.push_back(x);
    }
    
    ll cnt=1, S=0, D=0;
    
    while(t--) {
        ll x = max(v.front(), v.back());
 
        if(cnt%2 != 0) {
            S += x; cnt++;
 
            if(x != v.back()) {
                v.pop_front();
            } else {
                v.pop_back();
            }
        } else {
            D += x; cnt++;
 
            if(x != v.back()) {
                v.pop_front();
            } else {
                v.pop_back();
            }
        }
    }
    cout << S << " " << D << endl;
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________