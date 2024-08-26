// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
#define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k, y;
    cin >> x >> y;
    k = max(x, y) - 1;
    n = k*k;
    if (k &1){
        n += x;
        n += (k+1-y);
    }else{
        n += y;
        n += (k+1-x);
    }
    cout << n << endl;
    return 0;
}

int init(){

    return 0;
}