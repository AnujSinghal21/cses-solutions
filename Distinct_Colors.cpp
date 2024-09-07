// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
// #define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int dfs(int x, int p, vvi&gr, vector<set<int> *> & colors, vi&c, vi&counts){
    int mi = -1, mv = 0, cv;
    for (auto y : gr[x]){
        if (y != p){
            cv = dfs(y, x, gr, colors, c, counts);
            if (cv > mv){
                mv = cv;
                mi = y;
            }
        }
    }
    if (mi == -1){
        colors[x] = new set<int>;
        colors[x]->insert(c[x]); 
    }else{
        colors[x] = colors[mi];
        for (auto y: gr[x]){
            if (y != p && y != mi){
                for (auto e: *colors[y]){
                    colors[x]->insert(e);
                }
            }
        }
        colors[x]->insert(c[x]);
    }
    return counts[x] = colors[x]->size();
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    vi c(n);
    vvi gr(n);
    rep(i,0,n){
        cin >> c[i];
    }
    rep(i,0,n-1){
        cin >> x >> k;
        gr[x-1].push_back(k-1);
        gr[k-1].push_back(x-1);
    }
    vector<set<int> *> colors(n, NULL);
    vi counts(n, 0);
    dfs(0, -1, gr, colors, c, counts);
    print(counts);
    return 0;
}

int init(){

    return 0;
}