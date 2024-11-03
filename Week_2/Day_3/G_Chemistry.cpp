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

bool cmp(pair<char, ll> a, pair<char, ll> b) {
    return a.second > b.second;
}
//_______________________________________________________________________________________________

void solve() {
    ll n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, ll> mp;

    for(int i=0; i<n; i++) {
        mp[s[i]]++;
    }

    ll cnt = 0;

    for(auto it: mp) {
        if(it.second % 2 != 0) {
            cnt++;
        }
    }

    (cnt-1 < 0)? cnt = 0 : cnt--;

    if(k>=cnt && cnt<=n) { out("YES"); }
    else { out("NO"); }
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc
      solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________