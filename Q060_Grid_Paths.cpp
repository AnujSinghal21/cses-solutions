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
    vvi dp(n, vi(n));
    rep(i, 0, n){
        cin >> s;
        rep(j, 0, n){
            k = (s[j] != '*');
            if (i != 0 || j != 0) {
                dp[i][j] = k? ((i>0? dp[i-1][j]: 0)+ (j>0? dp[i][j-1]: 0))%mod : 0;
            }else{
                dp[i][j] = k;
            }
        }
    }
    print(dp[n-1][n-1]);
    return 0;
}

int init(){

    return 0;
}