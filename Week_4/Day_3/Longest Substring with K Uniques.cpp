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
    string s;
    ll k; cin >> s >> k;

    ll l = 0, r = 0, mx_len = INT_MIN; 
    map<char, int> cnt;

    while(r < s.length()) {
        cnt[s[r]]++;
        if(cnt.size() == k) {
            mx_len = max(mx_len, r-l + 1);
        } else {
            while(cnt.size() > k) {
                cnt[s[l]]--;

                if(cnt[s[l]] == 0) {
                    cnt.erase(s[l]);
                }
                l++;
            }
        }

        r++;
    }

    if (mx_len != INT_MIN){
        out(mx_len);
    } else {
        out(-1);
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