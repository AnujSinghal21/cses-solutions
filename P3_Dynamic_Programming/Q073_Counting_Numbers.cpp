// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int nums(int n){
    if (n < 0) return 0;
    vector<int> dg;
    int ans = 0;
    while(n){
        dg.push_back(n % 10);
        n /= 10;
    }
    int d = dg.size();
    vvi dp(d+1, vi(10, 0));
    dp[d][0] = 1;
    int maxf = 1, ld = 0;
    repd(i, d-1, 0){
        rep(j,0,10){
            int s = 0;
            rep(k,0,10){
                s += dp[i+1][k];
            }
            s -= dp[i+1][j];
            dp[i][j] = s - maxf * (j > dg[i] &&  j != ld);
        }
        dp[i][0] += 1;
        // print(dp[i]);
        if (dg[i] == ld){
            maxf = 0;
        }
        ld = dg[i];
    }
    rep(i,0,10){
        ans += dp[0][i];
    }
    return ans;
}

int solve(int testCaseNumber){
    int n, m, x, k;
    string s;
    cin >> n >> m;
    x = nums(n-1);
    k = nums(m);
    cout << (k - x) << endl;
    return 0;
}

int init(){

    return 0;
}