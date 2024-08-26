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
    cin >> k;
    int currd = 1, currdc = 9, c = 9;
    while (k > currd*c){
        k -= currd * c;
        currd++;
        c *= 10;
    }
    n = (c / 9 - 1) + (k / currd) + (!!(k%currd));
    if (k%currd){
        rep(i, 0, currd - (k % currd)){
            n /= 10;
        }
    }
    cout << (n % 10) << endl;
    return 0;
}

int init(){

    return 0;
}