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
    cin >> n >> x >> k;
    get_vec(a, n, int);
    get_vec(b, x, int);
    sort(all(a));
    sort(all(b));
    int l = 0, r = 0, m = 0;
    while (l < n && r < x){
        if (a[l] + k >= b[r] && a[l] - k <= b[r] ){
            m++;
            l++;
            r++;
        }else if (a[l] + k < b[r]){
            l++;
        }else{
            r++;
        }
    }
    cout << m << endl;
    return 0;
}

int init(){

    return 0;
}