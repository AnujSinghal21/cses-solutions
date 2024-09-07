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
    get_vec(v, n, int);
    int mx = 0, sum = 0;
    rep(i,0,n){
        mx = max(mx ,v[i]);
        sum += v[i];
    } 
    cout << max(2*mx, sum) << endl;
    return 0;
}

int init(){

    return 0;
}