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

//_______________________________________________________________________________________________

void solve() {
    map<int, char> mp;
    int cnt = 1;
    
    for(char i='a'; i<='z'; i++) {
        mp[cnt] = i;
        cnt++;
    }
    
    ll len; cin >> len;
    string s, ans=""; cin >> s;
    
    for(int i=len-1; i>=0; i--) {
        if(s[i] != '0') {
            int x = s[i] - '0';
            char ch = mp[x];
            ans += ch;
        } else {
            char _1 = s[i-2], _2 = s[i-1];
            string n = "";
            n += _1; n += _2;
            ll num = stoi(n);
            char ch = mp[num];
            ans += ch;
            
            i -= 2;
        }
    }
    
    reverse(all(ans));
    out(ans);
}

//_______________________________________________________________________________________________


int main(){
    IOS;
    tc
      solve();
    return 0;
}


//_______________________________________________________________________________________________