// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
// #define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n >> x;
    multiset<int> prices;
    rep(i,0,n){
        cin >> k;
        prices.insert(k);
    }
    rep(i,0,x){
        cin >> k;
        auto it = prices.upper_bound(k);
        if (it != prices.begin()){
            cout << (*(--it)) << "\n";
            prices.erase(it);
        }else{
            cout << -1 << "\n";
        }
    }

    return 0;
}

int init(){

    return 0;
}