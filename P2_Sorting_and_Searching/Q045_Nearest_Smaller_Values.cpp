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
    stack<pi> st;
    cin >> n;
    vi ans(n, 0);
    rep(i,0,n){
        cin >> x;
        while (!st.empty() && x <= st.top().first){
            st.pop();
        }
        if (!st.empty()){
            ans[i] = st.top().second;
        }
        st.push({x, i+1});
    }
    print(ans);
    return 0;
}

int init(){

    return 0;
}