// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int dfs(int x, vvi &gr, vi&ans){
    if (ans[x] != -1) return ans[x];
    ans[x] = 0;
    repe(y, gr[x]){
        ans[x] += dfs(y, gr, ans) + 1;
    }
    return ans[x];
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    vvi gr(n);
    rep(i,1,n){
        cin >> x;
        gr[x-1].push_back(i);
    }
    vi ans(n, -1);
    dfs(0,gr,ans);
    print(ans);

    return 0;
}

int init(){

    return 0;
}