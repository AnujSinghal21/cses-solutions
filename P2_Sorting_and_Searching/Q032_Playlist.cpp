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
    map<int, int> lastOccur;
    int curr = 0, mx = 0;
    rep(i, 0, n){
        cin >> x;
        if (lastOccur.find(x) == lastOccur.end()){
            curr++;
        }else{
            curr = min(curr + 1, i+1 - lastOccur[x]);
        }
        mx = max(mx, curr);
        lastOccur[x] = i+1;
    }
    cout << mx << endl;
    return 0;
}

int init(){

    return 0;
}