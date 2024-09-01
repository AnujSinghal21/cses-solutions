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
    vector<pair<int, int> > vp;
    cin >> n;
    rep(i,0,n){
        cin >> x >> k;
        vp.push_back({k, x});
    }
    sort(all(vp));
    int last = 0, ans = 0;
    rep(i, 0, n){
        if (vp[i].second >= last){
            ans++;
            last = vp[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}

int init(){

    return 0;
}