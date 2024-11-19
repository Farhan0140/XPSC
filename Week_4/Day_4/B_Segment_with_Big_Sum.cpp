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
    ll n, s; cin >> n >> s;
    vector<ll> v(n);

    for(auto &it: v) {
        cin >> it;
    } 

    ll l = 0, r = 0, m_l = INT_MAX, sum = 0;
    while(r < n) {
        sum += v[r];

        if(sum >= s) {
            // m_l = min(m_l, r - l + 1);

            while(sum >= s) {
                m_l = min(m_l, r - l + 1);
                sum -= v[l];
                l++;
            }
        } 
        r++;
    }

    if(m_l == INT_MAX) {
        out(-1);
    } else {
        out(m_l);
    }
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    /*
    tc
    */
      solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________