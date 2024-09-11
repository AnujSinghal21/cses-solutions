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
    cin >> n >> x;
    get_vec(v, n, int);
    vpi dp(1 << n, {inf, inf});
    dp[0] = {1, 0};
    rep(i, 1, (1<<n)){
        rep(j, 0, n){
            if (i & (1 << j)){
                pi without = dp[i ^ (1 << j)];
                if (without.second + v[j] <= x){
                    without.second += v[j];
                }else{
                    without.first += 1;
                    without.second = v[j];
                }
                dp[i] = min({dp[i], without});
            }
        }
    }
    cout << dp[(1 << n) - 1].first << endl;

    return 0;
}

int init(){

    return 0;
}