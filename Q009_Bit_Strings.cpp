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
    int ans = 1;
    while(n--){
        ans <<= 1;
        ans %= mod;
    }
    print(ans);
    return 0;
}

int init(){

    return 0;
}