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
    multiset<int> b;
    cin >> n;
    k = 0;
    rep(i, 0, n){
        cin >> x;
        auto it = b.upper_bound(x);
        if (it == b.end()){
            k++;
        }else{
            b.erase(it);
        }
        b.insert(x);
    }
    cout << k <<endl;
    return 0;
}

int init(){

    return 0;
}