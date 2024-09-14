// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#define CPM_DFS
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

pi dfs(int x, int p, vvi &gr){
    int mx1d = -1, mx2d = -1, mxsd = 0;
    repe(y, gr[x]){
        if (y == p) continue;
        pi a = dfs(y, x, gr);
        if (a.first > mx1d){
            mx2d = mx1d;
            mx1d = a.first;
        }else if (a.first > mx2d){
            mx2d = a.first;
        }
        if (a.second > mxsd){
            mxsd = a.second;
        }
    }
    if (mx1d > -1 && mx2d > -1){
        mxsd = max(mxsd, mx1d + mx2d + 2);
    }
    mxsd = max(mxsd, 1 + mx1d);
    return {mx1d + 1, mxsd};
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    input_bdtree(gr, n);
    cout << dfs(0, -1, gr).second << endl;
    return 0;
}

int init(){

    return 0;
}
