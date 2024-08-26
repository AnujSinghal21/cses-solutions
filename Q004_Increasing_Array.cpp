// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k = 0;
    string s;
    cin >> n;
    int l = 0;
    rep(i, 0, n){
        cin >> x;
        if (l > x){
            k += l - x;
        } else {
            l = x;
        }
    }
    cout << k << endl;
    return 0;
}

int init(){

    return 0;
}