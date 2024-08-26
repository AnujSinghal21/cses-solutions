// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
#define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n >> x;
    if (n < x){
        swap(n, x);
    }
    k = n-x;
    n -= 2*(k);
    x -= (k);
    if (n >= 0 && x >= 0 && n == x && n % 3 == 0){
        yeah
    }else{
        nope
    }
    return 0;
}

int init(){

    return 0;
}