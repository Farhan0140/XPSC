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
    ll t; cin >> t;
    list<ll> v;

    for(int i=0; i<t; i++) {
        ll it; cin >> it;
        v.push_back(it);
    }

    v.sort();
    list<ll> li1 = v, li2 = v, li3 = v;
    li1.pop_front();
    li1.pop_front();

    li2.pop_back();
    li2.pop_back();

    li3.pop_back();
    li3.pop_front();

    ll mn = INT_MAX;
    mn = min(min((li1.back() - li1.front()), li2.back() - li2.front()), li3.back() - li3.front());
    out(mn);
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