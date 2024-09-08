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
    vpi dur(n);
    int a, b;
    rep(i,0,n){
        cin >> a >> b;
        dur[i] = {b, a};
    }
    sort(all(dur));
    multiset<int> watching;
    rep(i,0,k){
        watching.insert(0);
    }
    int ans = 0, turn = 0;
    rep(i,0,n){
        auto it = watching.upper_bound(dur[i].second);
        if (it != watching.begin()){
            it--;
            watching.erase(it);
            watching.insert(dur[i].first);
            ans++;
        }
    }
    cout << ans << endl;


    return 0;
}

int init(){

    return 0;
}