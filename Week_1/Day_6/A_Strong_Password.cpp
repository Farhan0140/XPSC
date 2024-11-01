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
    string s; cin >> s;
    ll freq[26] = {0};

    for(int i=0; i<s.length(); i++) {
        freq[s[i]-'a']++;
    }

    char add;

    for(int i=0; i<26; i++) {
        if(freq[i] == 0) {
            add = char(i+'a');
            break;
        }
    }

    string s1="", s2="";
    bool flag = false;
    if(s.length() == 1) {
        cout << s << add << endl;
        return;
    } else {
        for(int i=1; i<s.length(); i++) {
            if(s[i-1] == s[i]) {
                s1 = s.substr(0, i);
                s2 = s.substr(i, s.length());
                flag = true;
                break;
            }
        }
    }
    
    if(flag) {
        cout << s1 << add << s2 << endl;
    } else {
        cout << s << add << endl;
    }
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________