// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, m, x, k;
    string s;
    cin >> n >> m;
    vector<vvi> dp(m+1, vvi(1<<n, vi(1+n, 0)));
    dp[0][(1<<n) - 1][n] = 1;
    rep(i, 1, m+1){
        rep(j, 0, 1 << n){
            dp[i][j][0] = dp[i-1][j][n];
        }
        rep(k,1,n+1){
            rep(j, 0, 1 << n){
                dp[i][j][0] = dp[i-1][j][n];
                if (k > 1 && (j & (1 << (k-1))) && (j & (1 << (k-2)))){
                    dp[i][j][k] += dp[i][j][k-2];
                }
                if ((j & (1 << (k-1)))){
                    dp[i][j][k] += dp[i][j ^ (1 << (k-1))][k-1];
                }else{
                    dp[i][j][k] += dp[i][j ^ (1 << (k-1))][k-1];
                }
                dp[i][j][k] %= mod;
                // debug(i);debug(j);debug(k);
                // debug(dp[i][j][k]);
            }
        }
    }
    cout << dp[m][(1 << n)-1][n] << endl;
    return 0;
}

int init(){

    return 0;
}