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
    sort(all(v));
    int curr = 1;
    rep(i,0,n){
        if (curr < v[i]){
            break;
        }
        curr += v[i];
    }
    cout << (curr) << endl;
    return 0;
}

int init(){

    return 0;
}