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
    string s1, s2;
    cin >> s1 >> s2;
    n = s1.size();
    int m = s2.size();
    vvi gr(n+1, vi(m+1));
    rep(i, 0, n+1){
        gr[i][0] = i;
    }
    rep(i, 0, m+1){
        gr[0][i] = i;
    }
    rep(i, 1, n+1){
        rep(j, 1, m+1){
            gr[i][j] = min({gr[i-1][j] + 1, gr[i][j-1] + 1, gr[i-1][j-1] + (s1[i-1] != s2[j-1])});
        }
    }
    cout << gr[n][m] << endl;
    return 0;
}

int init(){

    return 0;
}