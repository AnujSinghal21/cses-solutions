// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> x >> n;
    multiset<int, greater<int> > dists;
    multiset<int> pos;
    dists.insert(x);
    rep(i,0,n){
        cin >> k;
        auto lit = pos.lower_bound(k);
        auto rit = pos.upper_bound(k);
        int ld, rd;
        if (pos.size() != 0 && lit != pos.begin()){
            lit--;
            ld = (*lit);
        }else{
            ld = 0;
        }
        if (rit != pos.end()){
            rd = (*rit);
        }else{
            rd = x;
        }
        int dd = rd - ld;
        dists.erase(dists.find(dd));
        dists.insert(rd - k);
        dists.insert(k - ld);
        pos.insert(k);
        cout << *dists.begin() << endl;
    }
    return 0;
}

int init(){

    return 0;
}