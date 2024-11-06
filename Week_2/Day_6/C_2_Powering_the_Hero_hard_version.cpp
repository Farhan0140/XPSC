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
    ll l; cin >> l;
    priority_queue<ll> pq;
    ll arr[l], ans = 0;

    for(int i=0; i<l; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<l; i++) {
        if(arr[i] > 0) {
            pq.push(arr[i]);
        } else if(arr[i] == 0 && !pq.empty()){
            ans += pq.top();
            pq.pop();
        }
    }

    out(ans);
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