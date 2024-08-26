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
    cin >> n;
    vector<int> ans = {0, 0, 6, 28, 96};
    rep(i, 1, n+1){
        if (i < 5){
            cout << ans[i] << endl;
            continue;
        }
        x = (i-4)*(i-4)*((i)*(i)-9);
        x += (4*(i-4))*((i)*(i)-7); 
        x += (8)*((i)*(i)-4);
        x += (4*(i-3))*((i)*(i)-5);
        x += (4)*((i)*(i)-3);
        x>>= 1;
        cout << x << endl;
    }
    return 0;
}

int init(){

    return 0;
}