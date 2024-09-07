// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    ll n, x, k;
    string s;
    cin >> n >> k;
    get_vec(v, n, ll);
    ll l = 1, r = 1e18;
    auto pos = [&v, k](ll x){
        ll t = 0;
        for (auto e: v){
            t += x / e;
            if (t < 0 || t >= k){
                return true;
            }
        }
        return false;
    };
    while (l < r){
        ll mid = (l+r)/2;
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