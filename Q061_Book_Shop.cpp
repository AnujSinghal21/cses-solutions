// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
// #define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n >> x;
    get_vec(prices, n, int);
    get_vec(pages, n, int);
    vi dp(x+1, 0);
    rep(i, 0, n){
        repd(j, x, 1){
            if (j >= prices[i]){
                dp[j] = max(pages[i] + dp[j-prices[i]], dp[j]);
            }
        }
    }
    print(dp[x]);

    return 0;
}

int init(){

    return 0;
}