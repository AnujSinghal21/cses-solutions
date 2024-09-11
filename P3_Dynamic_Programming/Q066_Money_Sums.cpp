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
    get_vec(v, n, int);
    int sm = 0;
    rep(i,0,n) sm += v[i];
    vi pos(sm+1, 0);
    pos[0] = 1;
    rep(j, 0, n){
        repd(i, sm, v[j]){
            pos[i] |= pos[i-v[j]];
        }
    }
    vi ans;

    rep(i, 1, sm+1){
        if(pos[i]){
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    print(ans);

    return 0;
}

int init(){

    return 0;
}