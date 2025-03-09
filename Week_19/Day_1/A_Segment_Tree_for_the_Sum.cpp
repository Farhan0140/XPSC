#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const int SZ = 1e5 + 9;  


//_______________________________________________________________________________________________

ll arr[SZ], Tree[4 * SZ];

void Build (ll Node, ll Begin, ll End) {

    if(Begin == End) {

        Tree[Node] = arr[Begin];   // OR arr[End];
        return;

    }

    ll Mid = (Begin + End) / 2;
    ll Left_Child = 2 * Node;
    ll Right_Child = (2 * Node) + 1;

    Build(Left_Child, Begin, Mid);
    Build(Right_Child, Mid + 1, End);

    Tree[Node] = Tree[Left_Child] + Tree[Right_Child];

}


void Update(ll Node, ll Begin, ll End, ll Index, ll Value) {

    if(Index < Begin || Index > End) {

        return;

    }

    if(Begin == End) {

        Tree[Node] = Value;
        return;

    }

    ll Mid = (Begin + End) / 2;
    ll Left_Child = 2 * Node;
    ll Right_Child = (2 * Node) + 1;

    Update(Left_Child, Begin, Mid, Index, Value);
    Update(Right_Child, Mid + 1, End, Index, Value);

    Tree[Node] = Tree[Left_Child] + Tree[Right_Child];

}


ll Query(ll Node, ll Begin, ll End, ll i, ll j) {

    if(End < i || Begin > j) {

        return 0;

    }

    if(Begin >= i && End <= j) {

        return Tree[Node];

    }

    ll Mid = (Begin + End) / 2;
    ll Left_Child = 2 * Node;
    ll Right_Child = (2 * Node) + 1;

    return Query(Left_Child, Begin, Mid, i, j) + Query(Right_Child, Mid + 1, End, i, j);

}

//_______________________________________________________________________________________________


int main(){

    ll n, q; cin >> n >> q;
    for(int i=1; i<=n; i++) {

        cin >> arr[i];

    }

    Build(1, 1, n);

    while(q--) {

        ll chk; cin >> chk;

        if(chk == 1) {

            ll index, value; cin >> index >> value;
            index++;
            Update(1, 1, n, index, value);

        } else {

            ll l, r; cin >> l >> r;
            l++;
            cout << Query(1, 1, n, l, r) << endl;

        }
    }

    return 0;

}


//_______________________________________________________________________________________________