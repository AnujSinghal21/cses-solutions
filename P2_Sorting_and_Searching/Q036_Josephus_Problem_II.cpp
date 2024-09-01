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
    cin >> n >> k;
    OrderedSet nums;
    rep(i,1,n+1){
        nums.insert(i);
    }
    x = k;
    while(nums.size()){
        x %= nums.size();
        int d = *nums.find_by_order(x);
        nums.erase(d);
        x += k;
        cout << d << " ";
    }
    return 0;
}

int init(){

    return 0;
}