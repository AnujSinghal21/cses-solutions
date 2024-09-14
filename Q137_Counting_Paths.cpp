// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#define CPM_TREE_ANCESTOR
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

vi logseq(vi & seq){
    vi s;
    for (int i = 1; i <= seq.size(); i *= 2){
        s.push_back(seq[seq.size() - i]);
    }
    return s;
}
int log_ancestor_tree(int x, vi& seq, vvi &gr, vvi &kthPar, vi&depth, int d){
    kthPar[x] = logseq(seq);
    int t = seq.size() == 0? -1: *(seq.rbegin());
    seq.push_back(x);
    depth[x] = d;
    repe(y, gr[x]){
        if (y == t) continue;
        log_ancestor_tree(y, seq, gr, kthPar, depth, d+1);
    }
    seq.pop_back();
    return 0;
}
int kth_ancestor_tree(int x, int k, vvi &kthPar){
    int l = 0;
    while(k){
        if (k & 1){
            if (l >= kthPar[x].size()){
                x = -1;
                break;
            }
            x = kthPar[x][l];
        }
        l++;
        k >>= 1;
    }
    return x;
}
int lowest_common_ancestor(int x, int y, vvi &kthPar, vi &depth){
    if(depth[x] < depth[y]){
        swap(x, y);
    }
    x = kth_ancestor_tree(x, depth[x] - depth[y], kthPar);
    int j = 0;
    while (x != y){
        while (j < kthPar[x].size()){
            if (kthPar[x][j] == kthPar[y][j]) break;
            j++;
        }
        if (j == 0){
            j = 1;
        }
        x = kthPar[x][j-1];
        y = kthPar[y][j-1];
        j = 0;
    }
    return x;
}

int dfs(int x, int p, vvi&gr, vi &starts, vi &ends, vi&ans){
    int s = starts[x];
    repe(y, gr[x]){
        if (y == p) continue;
        s += dfs(y, x, gr, starts, ends, ans);
    }
    ans[x] = s - ends[x] / 2;
    return s - ends[x];
}

int solve(int testCaseNumber){
    int n, x, k, q;
    string s;
    cin >> n >> q;
    vvi gr(n);
    rep(i, 1, n){
        cin >> x >> k;
        gr[x-1].push_back(k-1);
        gr[k-1].push_back(x-1);
    }
    vvi boss(n);
    vi seq;
    vi depth(n);
    log_ancestor_tree(0, seq, gr, boss, depth, 0);
    vi starts(n, 0);
    vi ends(n, 0);
    vi ans(n, 0);
    rep(i,0,q){
        cin >> x >> k;
        x--;k--;
        starts[x]++;
        starts[k]++;
        x = lowest_common_ancestor(x, k, boss, depth);
        ends[x] += 2;
    }
    dfs(0, -1, gr, starts, ends, ans);
    print(ans);
    return 0;
}

int init(){

    return 0;
}
