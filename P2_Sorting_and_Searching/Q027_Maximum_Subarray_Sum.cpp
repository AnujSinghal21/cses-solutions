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
    int ans = v[0], curr = 0;
    rep(i,0,n){
        if (curr < 0){
            curr = v[i];
        }else{
            curr += v[i];
        }
        ans = max(ans, curr);
    }

    cout << ans << endl;
    return 0;
}

int init(){

    return 0;
}