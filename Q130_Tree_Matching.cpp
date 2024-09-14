// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

pi dfs(int x, int p, vvi&gr, vpi&ans){
    if (ans[x].first != -1) return ans[x];
    if (gr.size() == 1 && x != 0) return {0, 0};
    int sum = 0, hasz = 0;
    pi t;
    repe(y, gr[x]){
        if (p == y) continue;
        t = dfs(y, x, gr, ans);
        if (!t.second) hasz = 1;
        sum += t.first;
    }
    if (hasz) sum++;
    return ans[x] = {sum, hasz};
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    vvi gr(n);
    rep(i,1,n){
        cin >> x >> k;
        gr[x-1].push_back(k-1);
        gr[k-1].push_back(x-1);
    }
    vpi ans(n, {-1, 0});
    cout << dfs(0,-1,gr,ans).first << endl;
    return 0;
}

int init(){

    return 0;
}