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
    cin >> n >> k;
    map<int, int> cu;
    get_vec(v, n, int);
    int l = 0, r = 0, ans = 0;
    while (r < n){
        cu[v[r]] += 1;
        r++;
        if (cu.size() > k){
            cu[v[l]]--;
            if (cu[v[l]] == 0){
                cu.erase(v[l]);
            }
            l++;
            r--;
            cu[v[r]]--;
        }else{
            ans += (r - l);
        }
    }
    cout << ans << endl;
    return 0;
}

int init(){

    return 0;
}