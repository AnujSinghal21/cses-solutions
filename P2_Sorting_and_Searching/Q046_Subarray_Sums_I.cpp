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
    get_vec(v, n, int);
    int l = 0, r = 0, cur = 0, ans = 0;
    while (l < n || r < n){
        if (cur < x){
            if (r == n){
                break;
            }
            cur += v[r];
            r++;
        }else if (cur > x){
            cur -= v[l];
            l++;
        }else{
            ans++;
            cur -= v[l];
            l++;
        }
    }
    cout << ans << endl;

    return 0;
}

int init(){

    return 0;
}