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

//_______________________________________________________________________________________________

void solve() {
    ll n; cin >> n;
    vector<int> v(n);
    inv(v);

    map<char, int> mp;
    for(char i='a'; i<='z'; i++) {
        mp[i] = 0;
    }

    // for(auto it: mp) {
    //     cout << it.first << " " << it.second << endl;
    // }

    string s = "";

    for(int i=0; i<n; i++) {
        bool bl = false;
        for(auto it: mp) {
            if(it.second == v[i]) {
                char ch = it.first;
                s += ch;
                mp[ch]++;
                bl = true;
                break;
            }
        }

        if(bl == false) {
            for(auto it: mp) {
                if(it.second == 0) {
                    char ch = it.first;
                    s += ch;
                    mp[ch]++;
                    break;
                }
            }
        }
    }

    out(s);
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