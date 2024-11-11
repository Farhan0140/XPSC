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

bool cmp(pair<int, int>a, pair<int, int>b) {
    return a.first > b.first;
}

//_______________________________________________________________________________________________

void solve() {
    ll lst, k, lan; cin >> lst >> k >> lan;
    vector<pair<int, int>> v;

    for(int i=0; i<lst; i++) {
        ll l, len; cin >> len >> l;
        v.push_back({len, l});
    }

    ll sum = 0;
    sort(all(v), cmp);

    for(auto it: v) {
        if(k == 0) { break; }
        if(it.second == lan) {
            sum += it.first;
            k--; 
            if(k == 0) { break; }
        }
    }

    if(sum == 0 || k != 0) {
        out(-1);
    } else {
        out(sum);
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