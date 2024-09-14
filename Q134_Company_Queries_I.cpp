// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#define CPM_DFS
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k, q;
    string s;
    cin >> n >> q;
    vvi gr(n);
    vi seq;
    rep(i, 1, n){
        cin >> x;
        gr[x-1].push_back(i);
    }
    vvi boss(n);
    log_ancestor_tree(0, seq, gr, boss);
    rep(i,0,q){
        cin >> x >> k;
        x--;
        x = kth_ancestor_tree(x, k, boss);
        if (x != -1){
            x++; 
        }
        cout << x << "\n" ;
    }

    return 0;
}

int init(){

    return 0;
}
