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
    ll len; cin >> len;
    string s; cin >> s;
    vector<ll> to_cng;

    ll mx_sum = 0;
    ll to_ch = 0;

    for(int i=0; i<len; i++) {
        ll l_p = 0, r_p = 0;

        if(s[i] == 'L') {
            r_p = len - i - 1;
            l_p = len - (r_p + 1);
            mx_sum += max(l_p, r_p);

            if(l_p < r_p) {
                to_ch++;
                to_cng.push_back(abs(r_p - l_p));
            }
        } else {
            r_p = len - i -1;
            l_p = len - (r_p + 1);
            mx_sum += max(l_p, r_p);

            if(l_p > r_p) {
                to_ch++;
                to_cng.push_back(abs(r_p - l_p));
            }
        }
    }

    sort(all(to_cng), greater<int>());
    ll arr[len];

    for(int i=to_ch-1; i<len; i++) {
        arr[i] = mx_sum;
    }

    for(int i=to_ch-2; i>=0; i--) {
        mx_sum -= to_cng.back();
        arr[i] = mx_sum;
        to_cng.pop_back();
    }

    for(int i=0; i<len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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