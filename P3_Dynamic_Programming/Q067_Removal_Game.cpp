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
    get_vec(v, n, int);
    vvi dp(1+n, vi(n, 0));
    PreSums<int> pre(v);
    rep(sz, 1, n+1){
        rep(i, 0, n){
            dp[sz][i] = max(pre.sum(i, i+sz-1) - dp[sz-1][i+1], pre.sum(i, i+sz-1) - dp[sz-1][i]);
        }
    }
    cout << dp[n][0] << endl;
    return 0;
}

int init(){

    return 0;
}