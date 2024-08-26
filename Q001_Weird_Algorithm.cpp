// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k;
    cin >> n;
    cout << n << " ";
    while (n != 1){
        if (n % 2){
            n = 3*n + 1;
        }else {
            n >>= 1;
        }
        cout << n << " ";
    }
    return 0;
}

int init(){

    return 0;
}