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
    int sm = n*(n+1) / 2;
    if (sm &1){
        cout << 0 << endl;
        return 0;
    }
    sm /= 2;
    vvi dp(sm+1, vi(n+1, 0));
    dp[0][0] = 1;
    rep(i,0,n+1){
        dp[0][i] = 1;
    }
    rep(i, 1, sm+1){
        rep(j, 1, n+1){
            dp[i][j] = (i<j?0:dp[i-j][j-1]) + dp[i][j-1];
            dp[i][j] %= mod;
        }
    }
    cout << (dp[sm][n] * modInv(2, mod)) % mod << endl;


    return 0;
}

int init(){

    return 0;
}