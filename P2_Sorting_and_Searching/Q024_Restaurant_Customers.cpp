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
    vector<pair<int, int> > v;
    rep(i,0,n){
        cin >> x >> k;
        v.push_back({x, 1});
        v.push_back({k, -1});
    }
    sort(all(v));
    int ans = 0, curr = 0;
    rep(i,0,v.size()){
        curr += v[i].second;
        ans = max(ans, curr);
    }
    cout << ans << endl;
    return 0;
}

int init(){

    return 0;
}