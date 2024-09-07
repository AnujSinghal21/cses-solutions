// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
//#define INTERACTIVE
#define USE_LL
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    vi a(n), d(n);
    ll sum = 0;
    rep(i,0,n){
        cin >> a[i] >> d[i];
        sum += d[i];
    }
    sort(all(a));
    rep(i,0,n){
        sum -= (n-i)*a[i];
    }

    cout << sum << endl;
    return 0;
}

int init(){

    return 0;
}