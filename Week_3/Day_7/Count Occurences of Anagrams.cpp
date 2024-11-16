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
    string txt, pat; cin >> txt >> pat;
    map<char, int> tx, pa;

    for(int i=0; i<pat.size(); i++) {
        tx[txt[i]]++;
        pa[pat[i]]++;
    }

    ll cnt = 0, l = pat.size();
    if(tx == pa) cnt++;

    for(int i=l; i<txt.size(); i++) {
        tx[txt[i]]++;
        tx[txt[i - l]]--;

        if(tx[txt[i - l]] == 0) {
            tx.erase(txt[i - l]);
        }

        if(tx == pa) cnt++;
    }

    // for(auto it: tx) {
    //     cout << it.first << " " << it.second << endl;
    // }

    out(cnt);
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