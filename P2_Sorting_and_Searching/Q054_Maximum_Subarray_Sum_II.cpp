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
    cin >> n >> x >> k;
    k -= x;
    k++;
    get_vec(v, n, int);

    PreSums<int> pr(v);
    multiset<int> ms;
    vi pre = pr.pre;
    int ans = pre[x];
    ms.insert(0);
    rep(i,1,n+1){
        ms.insert(pre[i]);
        if (ms.size() > k){
            ms.erase(ms.find(pre[i-k]));
        }
        if (i + x <= n ){
            ans = max(ans, pre[i+x] - *ms.begin());
        }
    }
    cout << ans << endl;

    return 0;
}

int init(){

    return 0;
}