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
    vpi a(n), b(n);
    rep(i,0,n){
        cin >> x;
        a[i] = {x, i};
        cin >> x;
        b[i] = {x, i};
    }
    sort(all(a));
    sort(all(b));
    vi allo(n);
    int l = 0, r= 0;
    int curr = 0, mx = 0;
    stack<int> vac;
    while (l < n){
        if (a[l].first <= b[r].first){
            if (vac.empty()){
                allo[a[l].second] = ++mx;
            }else{
                allo[a[l].second] = vac.top();
                vac.pop();
            }
            l++;
        }else {
            vac.push(allo[b[r].second]);
            r++;
        }
    }
    cout << mx << endl;
    print(allo);
    return 0;
}

int init(){

    return 0;
}