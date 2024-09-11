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
    vector<pair<int, pi> > proj;
    int a, b, c;
    rep(i, 0, n){
        cin >> a >> b >> c;
        proj.push_back({a, {b, c}});
    }
    sort(all(proj));
    vi dp(n+1);
    dp[n] = 0;
    repd(i, n-1, 0){
        dp[i] = max(dp[i+1], proj[i].second.second + dp[upper_bound(all(proj), make_pair(proj[i].second.first, make_pair(0,0)), [](pair<int, pi> a, pair<int, pi> b){
            return a.first < b.first;
        }) - proj.begin()]);
    }
    cout << dp[0] << endl;

    return 0;
}

int init(){

    return 0;
}