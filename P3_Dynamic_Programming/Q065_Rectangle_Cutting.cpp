// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int a, b;
    cin >> a >> b;
    vvi dp(a + 1, vi (b + 1, inf));

    rep(i, 1, a+1){
        rep(j, 1, b+1){
            if (i == j){
                dp[i][j] = 0;
                continue;
            }
            rep(k, 1, i){
                dp[i][j] = min(dp[i][j], 1 + dp[k][j] + dp[i-k][j]);
            }
            rep(k, 1, j){
                dp[i][j] = min(dp[i][j], 1 + dp[i][k] + dp[i][j-k]);
            }
        }
    }
    cout << dp[a][b] << endl;
    return 0;
}

int init(){

    return 0;
}