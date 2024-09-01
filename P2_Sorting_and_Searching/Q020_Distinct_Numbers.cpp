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
    cin >> n;
    set<int> a;
    rep(i, 0, n){
        cin >> x;
        a.insert(x);
    }
    cout << a.size() << endl;
    return 0;
}

int init(){

    return 0;
}