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
    cin >> n >> k;
    get_vec(v, n, int);
    int l = 0, r = 1e18, mid;
    auto pos = [&](int sm){
        int t = 1, cu = 0;
        rep(i,0,n){
            cu += v[i];
            if (cu > sm){
                t++;
                cu = v[i];
                if (cu > sm){
                    return false;
                }
            }
        }
        return t <= k;
    };
    while(l < r){
        mid = (l+r)/2;
        if (pos(mid)){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    cout << l << endl;
    return 0;
}

int init(){

    return 0;
}