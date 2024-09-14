// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#define CPM_DFS
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif
int dfs(int x, int p, vvi &gr, vi &ans){
    int a = 0;
    repe(y, gr[x]){
        if (y == p) continue;
        a = max(a, dfs(y, x, gr, ans) + 1);
    }
    return ans[x] = a;
}
int dfs2(int x, int p, int above, vvi &gr, vi & depth, vi &ans){
    int a = 0;
    int mxd = -1, mxd2 = -1;

    repe(y, gr[x]){
        if (y == p) continue;
        if (mxd < depth[y]){
            mxd2 = mxd;
            mxd = depth[y];
        }else if (mxd2 < depth[y]){
            mxd2 = depth[y];
        }
    }

    repe(y, gr[x]){
        if (y == p) continue;
        int ab = above+1;
        if (mxd == depth[y]){
            ab = max(ab, mxd2 + 2);
        }else{
            ab = max(ab, mxd + 2);
        }
        dfs2(y, x, ab, gr, depth, ans);
    }
    a = max(mxd + 1, above);
    return ans[x] = a;
}


int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    input_bdtree(gr, n);
    vi depth(n);
    dfs(0,-1,gr,depth);
    vi mxd(n);
    dfs2(0,-1, 0,gr,depth,mxd);
    print(mxd);
    
    return 0;
}

int init(){

    return 0;
}
