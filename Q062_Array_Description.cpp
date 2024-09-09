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
    cin >> n >> x;
    vi prev(x+2, 0), curr(x+2, 0);
    get_vec(v, n, int);
    if (v[0]){
        prev[v[0]] = 1; 
    }else{
        rep(j, 1, x+1){
            prev[j] = 1;
        }
    }
    rep(i, 1, n){
        if (v[i]){
            curr[v[i]] = prev[v[i]-1] + prev[v[i]] + prev[v[i]+1]; 
        }else{
            rep(j, 1, x+1){
                curr[j] = prev[j-1] + prev[j] + prev[j+1]; 
                curr[j] %= mod;
            }
        }
        rep(j, 0, x+2) {
            prev[j] = curr[j];
            curr[j] = 0;
        }
    }
    int ans = 0;
    rep(i,1,x+1){
        ans += prev[i];
        ans %= mod;
    }
    print(ans);

    return 0;
}

int init(){

    return 0;
}