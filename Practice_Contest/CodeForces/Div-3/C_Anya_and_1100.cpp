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
    string s; cin >> s;
    string s1 = "1100";
    set<int> st;
    ll q; cin >> q;

    for(int i=0; i<s.length()-3; i++) {
        if(s.substr(i, 4) == s1) {
            st.insert(i);
        }
    }

    while(q--) {
        ll idx;
        char val; cin >> idx >> val;
        idx--;
        s[idx] = val;

        if(s.length() <= 3) {
            out("NO");
        } else {
            for(int i=idx-3; i<=idx; i++) {
                if(i >= 0 && i <= s.size()-4) {
                    if(s.substr(i, 4) == s1) {
                        st.insert(i);
                    } else {
                        st.erase(i);
                    }
                }
            }

            if(st.size() == 0) {
                out("NO");
            } else {
                out("YES");
            }
        }
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