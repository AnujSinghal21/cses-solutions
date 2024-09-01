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
    vector<int> v(n);
    rep(i, 0, n-1){
        v[i] = i+1;
    }
    v[n-1] = 0;
    k = 0;
    rep(i,0,n){
        x = v[k];
        v[k] = v[x];
        k = v[k];
        cout << (x+1) << " ";
    }
    return 0;
}

int init(){

    return 0;
}