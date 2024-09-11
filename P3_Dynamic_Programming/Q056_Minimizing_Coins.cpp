// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int recurse(int sum, vi&denom, vi&dp){
    if (sum < 0){
        return inf;
    }
    if (dp[sum] != -1) return dp[sum];
    int mn = inf;
    for (auto x : denom){
        mn = min(mn, 1+recurse(sum - x, denom, dp));
    }
    return dp[sum] = mn;    
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n >> x;
    vi dp(x+1, -1);
    dp[0] = 0;
    get_vec(denom, n, int);
    print(recurse(x, denom, dp) == inf ? -1: recurse(x, denom, dp));

    return 0;
}

int init(){

    return 0;
}