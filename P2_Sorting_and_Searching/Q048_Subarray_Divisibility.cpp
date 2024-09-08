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
    vi v(n+1);
    v[0] = 0;
    vi mods(n, 0);
    mods[0]++;
    rep(i,1,n+1){
        cin >> x;
        v[i] = v[i-1] + x;
        if (v[i] % n < 0){
            mods[(v[i]%n + n)]++;
        }else{
            mods[v[i] % n]++;
        }
    }
    int ans = 0;
    rep(i,0,n){
        ans += (mods[i]*(mods[i] - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}

int init(){

    return 0;
}