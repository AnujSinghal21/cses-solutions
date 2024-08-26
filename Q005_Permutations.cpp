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
    if (n < 5){
        if (n == 1){
            cout << 1 << endl;
        }else if (n == 4){
            cout << "2 4 1 3" << endl;
        }else{
            cout << "NO SOLUTION" << endl;
        }
        return 0;
    }
    rep(i, 0, n){
        if (i &1){
            cout << ((n+1)/2) + (i/2) + 1;
        }else{
            cout << i / 2 + 1;
        }
        cout << " ";
    }
    cout << endl;
    return 0;
}

int init(){

    return 0;
}