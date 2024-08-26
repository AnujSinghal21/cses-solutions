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
    cin >> s;
    vector<int> f(26, 0);
    for (auto c: s){
        f[c-'A']++;
    }
    x = 0;
    rep(i, 0, 26){
        x += f[i] & 1;
    }
    if (x > 1){
        cout << "NO SOLUTION\n";
    }else{
        int l = 0, r = s.size() - 1;
        rep(i, 0, 26){
            rep(j,0, f[i]/2){
                s[l] = 'A'+i;
                s[r] = 'A'+i;
                l++;r--;
            }
            if (f[i]&1){
                s[s.size() / 2] = 'A'+i;
            }
        }
        cout << s << endl;
    }
    return 0;
}

int init(){

    return 0;
}