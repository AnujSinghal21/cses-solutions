// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int recurse(vector<int> &v, int i, int d){
    if (i == v.size()){
        return d;
    }
    return min(recurse(v, i+1, abs(d+v[i])), recurse(v, i+1, abs(d-v[i])));
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n){
        cin >> v[i];
    }
    cout << recurse(v, 0, 0);

    return 0;
}

int init(){

    return 0;
}