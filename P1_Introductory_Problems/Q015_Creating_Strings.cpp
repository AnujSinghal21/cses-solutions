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
    sort(s.begin(), s.end());
    vector<string> ans;
    ans.push_back(s);
    while(next_permutation(s.begin(), s.end())){
        ans.push_back(s);
    }
    cout << ans.size() << endl;
    rep(i, 0, ans.size()){
        cout << ans[i] << endl;
    }
    return 0;
}

int init(){

    return 0;
}