// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
// #define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int recurse(int sum, int i, vi&denom, vvi&dp){
    if (sum < 0){
        return 0;
    }
    if (dp[sum][i] != -1) return dp[sum][i];
    int mn = 0, t;
    rep(j,0,denom.size()){
        t = recurse(sum - denom[j], j, denom, dp);
        mn += t;
        mn %= mod;
        dp[sum][j] = mn;
    }
    return dp[sum][i];    
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n >> x;
    vi dp(x+1);
    dp[0] = 1;
    get_vec(denom, n, int);
    rep(j, 0, n){
        rep(i, 1, x+1){
            dp[i] += i - denom[j] >= 0? dp[i-denom[j]] : 0;
            dp[i] %= mod;
        }
    }
    print(dp[x]);

    return 0;
}

int init(){

    return 0;
}