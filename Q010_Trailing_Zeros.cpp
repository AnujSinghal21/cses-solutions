// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x = 0, k;
    string s;
    cin >> n;
    int f = 5;
    while (n){
        x += (n / 5);
        n /= 5;
    }
    cout << x << endl;
    return 0;
}

int init(){

    return 0;
}