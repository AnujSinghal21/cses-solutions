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
    set<int> s;
    int ans = 1;
    rep(i,0,n){
        cin >> x;
        if (s.find(x+1) != s.end()){
            ans++;
        }
        s.insert(x);
    }
    cout << ans << endl;

    return 0;
}

int init(){

    return 0;
}