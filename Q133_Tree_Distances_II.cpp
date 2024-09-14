// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#define CPM_DFS
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif
pi dfs(int x, int p, vvi &gr, vpi &ans){
    pi a;
    pi acc = {0,1};
    repe(y, gr[x]){
        if (y == p) continue;
        a = dfs(y, x, gr, ans);
        acc.second += a.second;
        acc.first += a.first + a.second;
    }
    return ans[x] = acc;
}

int dfs2(int x, int p, pi above, vvi &gr, vpi &dc, vi &ans){
    int a;
    pi acc = above;
    repe(y, gr[x]){
        if (y == p) continue;
        acc.first += dc[y].first + dc[y].second;
        acc.second += dc[y].second;
    }
    repe(y, gr[x]){
        if (y == p) continue;
        pi ch = acc;
        ch.first -= dc[y].first + dc[y].second;
        ch.second -= dc[y].second;
        ch.first += ch.second;
        ch.first += 1;
        ch.second += 1;
        a = dfs2(y, x, ch, gr, dc, ans);
    }
    return ans[x] = acc.first;
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    input_bdtree(gr, n);
    vpi dc(n);
    dfs(0, -1, gr, dc);
    vi ans(n);
    dfs2(0, -1, {0,0}, gr, dc , ans);
    print(ans);
    return 0;
}

int init(){

    return 0;
}
