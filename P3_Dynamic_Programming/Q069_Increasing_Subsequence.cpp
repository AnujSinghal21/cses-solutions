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
    vi lis;
    rep(i, 0, n){
        auto it = lower_bound(all(lis), v[i]);
        if (it == lis.end()){
            lis.push_back(v[i]);
        }else{
            *it = v[i];
        }
    }
    cout << lis.size() << endl;
    return 0;
}

int init(){

    return 0;
}