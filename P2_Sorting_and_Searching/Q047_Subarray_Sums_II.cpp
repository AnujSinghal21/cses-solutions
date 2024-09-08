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
    cin >> n >> x;
    vi v(n+1);
    map<int, int> counts;
    v[0] = 0;
    counts[0] += 1;
    rep(i,1,n+1){
        cin >> k;
        v[i] = v[i-1] + k;
        counts[v[i]]++;
    }
    int ans = 0;
    rep(i,0,n+1){
        counts[v[i]]--;
        ans += counts[v[i] + x];
    }
    cout << ans << endl;
    return 0;
}

int init(){

    return 0;
}