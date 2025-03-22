#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll> arr;

class Segment_Tree {
    private:
      vector<ll> Tree;
      vector<ll> Lazy;

      void Propagate(ll Node, ll Begin, ll End) {

          if(Lazy[ Node ] == -1) {

              return;

          }

          ll childs = End - Begin + 1;
          Tree[ Node ] = childs * Lazy[ Node ];

          if(Begin != End) {

              ll Left_Child = Node * 2;
              ll Right_Child = (Node * 2) + 1;

              Lazy[ Left_Child ] = Lazy[ Node ];
              Lazy[ Right_Child ] = Lazy[ Node ];

          }

          Lazy[ Node ] = -1;

      }

      void Build_Tree(ll Node, ll Begin, ll End) {
          
          if(Begin == End) {
                
              Tree[ Node ] = 0;
              return;

          }

          ll Mid = (Begin + End) >> 1;
          ll Left_Child = Node << 1;
          ll Right_Child = Left_Child | 1; // OR: Left_Child + 1;

          Build_Tree(Left_Child, Begin, Mid);
          Build_Tree(Right_Child, Mid + 1, End);

          Tree[ Node ] = Tree[ Left_Child ] + Tree[ Right_Child ];

      }

      void Update_Tree(ll Node, ll Begin, ll End, ll i, ll j, ll Value) {

          Propagate(Node, Begin, End);
          
          if(j < Begin || i > End) {
              
              return;
              
          }
            
          if(Begin >= i && End <= j) {
                
              Lazy[ Node ] = Value;
              Propagate(Node, Begin, End);
              return;

          }

          ll Mid = (Begin + End) >> 1;
          ll Left_Child = Node << 1;
          ll Right_Child = Left_Child | 1; // OR: Left_Child + 1;

          Update_Tree(Left_Child, Begin, Mid, i, j, Value);
          Update_Tree(Right_Child, Mid + 1, End, i, j, Value);

          Tree[ Node ] = Tree[ Left_Child ] + Tree[ Right_Child ];

      }

      ll Query_Tree(ll Node, ll Begin, ll End, ll i, ll j) {

          Propagate(Node, Begin, End);

          if(j < Begin || i > End) {
              
              return 0;

          }

          if(i <= Begin && j >= End) {
              
              return Tree[ Node ];

          }

          ll Mid = (Begin + End) >> 1;
          ll Left_Child = Node << 1;
          ll Right_Child = Left_Child | 1; // OR: Left_Child + 1;

          return Query_Tree(Left_Child, Begin, Mid, i, j) + Query_Tree(Right_Child, Mid + 1, End, i, j);

      }
    
    public:
      
      void Build(ll n) {

          Tree.resize(4 * (n + 5));
          Lazy.resize(4 * (n + 5), 0);

          Build_Tree(1, 1, n);

      }

      void Update(ll n, ll i, ll j, ll value) {

          Update_Tree(1, 1, n, i, j, value);

      }

      ll Query(ll n, ll l, ll r) {

          return Query_Tree(1, 1, n, l, r);

      }
};


//___________________________________________________________________________________________________________________________________________________


int main(){

    ll n, q; cin >> n >> q;

    Segment_Tree seg_tree;
    seg_tree.Build(n);

    while(q--) {

        ll chk; cin >> chk;
        if(chk == 1) {
            
            ll l, r, val; cin >> l >> r >> val; 
            l++;
            seg_tree.Update(n, l, r, val);
            
        } else {
            
            ll l, r; cin >> l >> r; 
            l++;
            cout << seg_tree.Query(n, l, r) << endl;

        }
    }

    return 0;

}


//___________________________________________________________________________________________________________________________________________________