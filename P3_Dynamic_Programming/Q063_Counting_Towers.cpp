// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
#define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

vi dp1(mx6);
vi dp2(mx6);

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    cout << (dp1[n] + dp2[n]) % mod << endl;
    return 0;
}

int init(){
    dp1[1] = 1;
    dp2[1] = 1;
    rep(i, 2, mx6){
        dp1[i] = 4*dp1[i-1] + dp2[i-1];
        dp2[i] = dp1[i-1] + 2*dp2[i-1];
        dp1[i] %= mod;
        dp2[i] %= mod;
    }
    return 0;
}