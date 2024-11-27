#include <bits/stdc++.h>
using namespace std;
 
//_______________________________________________________________________________________________

const int mod = 1e9 + 7;
#define pi 3.141592653
#define ll long long int
#define all(x) x.begin(),x.end()
#define out(x) cout<<x<<"\n";
#define inv(v) for(auto &it: v){cin >> it;}

#define tc ll ttc; cin >> ttc; while(ttc--)
#define IOS (ios_base :: sync_with_stdio(false), cin.tie(NULL));

void in(ll &x) { cin >> x; }
void in(ll &x, ll &y) { cin >> x >> y; }
void in(ll &x, string &y) { cin >> x >> y; }
void in(ll &x, ll &y, ll &z) { cin >> x >> y >> z; }

//_______________________________________________________________________________________________

void solve() {
    ll n, l=0;
    string s; in(n, s);
    map<char, ll> mp;
    mp['A'] = 0;
    mp['B'] = 0;
    char ch = ' ';

    for(ll i=0; i<n; i++) {
        if(ch == ' ') {
            mp[s[i]]++;
            ch = s[i];
            continue;
        }

        if(s[i] == ch) {
            mp[s[i]]++;
        } else {
            mp[s[i]]++;

            if(s[i] == 'A') {
                mp['B']--;
            } else {
                mp['A']--;
                //ch = s[i];
            }
        }
        ch = s[i];

    }

    for(auto it: mp) {
        l += it.second;
    }

    out(l);
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