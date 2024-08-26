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
    cin >> n;
    x = (n)*(n+1) / 2;
    rep(i,0,n-1){
        cin >> k;
        x -= k;
    }
    cout << x << endl;
    return 0;
}

int init(){

    return 0;
}