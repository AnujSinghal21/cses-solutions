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
    get_vec(v, n, int)
    sort(all(v));
    int l = 0, r = n-1, g = 0;
    while (l <= r){
        if (v[l] + v[r] <=x){
            l++;r--;g++;
        }else{
            r--;g++;
        }
    }
    cout << g << endl;
    return 0;
}

int init(){

    return 0;
}