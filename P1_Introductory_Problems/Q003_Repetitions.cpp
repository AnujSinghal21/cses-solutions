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
    cin >> s;
    int mx = 0;
    char c = '\0';
    rep(i, 0, s.size()){
        if (s[i] == c){
            x++;
        }else{
            mx = max(mx, x);
            x = 1;
        }
        c = s[i];
    }
    mx = max(mx, x);
    cout << mx << endl;
    return 0;
}

int init(){

    return 0;
}