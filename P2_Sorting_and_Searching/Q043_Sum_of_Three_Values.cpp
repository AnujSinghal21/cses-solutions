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
    vpi v(n);
    rep(i,0,n){
        cin >> x;
        v[i] = {x, i+1};
    }
    sort(all(v));
    vi ans;
    rep(i,0,n){
        if (ans.size()) break;
        rep(j, i+1, n){
            if (ans.size()) break;
            auto it = lower_bound(v.begin() + (j+1), v.end(), make_pair(k - v[i].first - v[j].first, 0), [](pi a, pi b){
                return a.first < b.first;
            });
            if (it != v.end() && it->first == k - v[i].first - v[j].first){
                ans.push_back(v[i].second);
                ans.push_back(v[j].second);
                ans.push_back(it->second);
            }
        }
    }
    if (ans.size()){
        sort(all(ans));
        print(ans);
    }else{
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}

int init(){

    return 0;
}