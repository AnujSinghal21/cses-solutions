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
    vi dp(n+1, inf);
    dp[0] = 0;
    rep(i, 1, n+1){
        x = i;
        while (x){
            dp[i] = min(dp[i], 1+dp[i - x%10]);
            x /= 10;
        }
    }
    print(dp[n]);
    return 0;
}

int init(){

    return 0;
}