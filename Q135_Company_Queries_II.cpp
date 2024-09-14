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
    seq.push_back(x);
    depth[x] = d;
    repe(y, gr[x]){
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


int solve(int testCaseNumber){
    int n, x, k, q;
    string s;
    cin >> n >> q;
    vvi gr(n);
    rep(i, 1, n){
        cin >> x;
        gr[x-1].push_back(i);
    }
    vvi boss(n);
    vi seq;
    vi depth(n);
    log_ancestor_tree(0, seq, gr, boss, depth, 0);
    rep(i,0,q){
        cin >> x >> k;
        x--;k--;
        if(depth[x] < depth[k]){
            swap(x, k);
        }
        x = kth_ancestor_tree(x, depth[x] - depth[k], boss);
        int j = 0;
        while (x != k){
            while (j < boss[x].size()){
                if (boss[x][j] == boss[k][j]) break;
                j++;
            }
            if (j == 0){
                j = 1;
            }
            x = boss[x][j-1];
            k = boss[k][j-1];
            j = 0;
        }
        cout << (x+1) << endl;
    }
    return 0;
}

int init(){

    return 0;
}
