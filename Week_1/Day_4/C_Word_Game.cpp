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
    ll t; cin >> t;
    map<string, vector<int>> mp;

    for(int i=1; i<=3; i++) {
        for(int j=0; j<t; j++) {
            string s; cin >> s;

            mp[s].push_back(i);
        }
    }

    // for(auto [x, v]: mp) {
    //     cout << x << "--> ";
    //     for(auto person: v) {
    //         cout << person << " ";
    //     }
    //     cout << endl;
    // }

    vector<int> Point(4, 0);
    for(auto [x, v]: mp) {
        vector<int> P = v;

        if(P.size() == 1) {
            Point[P[0]] += 3;
        }
        if(P.size() == 2) {
            Point[P[0]]++;
            Point[P[1]]++;
        }
    }

    for(int i=1; i<=3; i++) {
        cout << Point[i] << " ";
    }
    cout << "\n";
}

//_______________________________________________________________________________________________
 
 
int main(){
    IOS;
    tc solve();
    return 0;
}
 
 
//_______________________________________________________________________________________________