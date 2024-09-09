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
    queue<int> ans;
    cin >> n;
    ans.push(1);
    int curr = 1, t;
    rep(i, 2, n+1){
        if (i <= 6){
            ans.push(curr + 1);
            curr += curr + 1;
        }else{
            ans.push(curr);
            curr += curr;
            curr -= ans.front();
            ans.pop();
            curr %= mod;
            if (curr < 0) curr += mod;
        }
    }
    while(ans.size() > 1){
        ans.pop();
    }
    cout << ans.front() << endl;
    return 0;
}

int init(){

    return 0;
}