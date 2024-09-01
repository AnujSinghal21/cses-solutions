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

    vector<pair<int ,int> > v;
    rep(i,0,n){
        cin >> k;
        v.push_back({k, -i});
    }
    sort(all(v));
    k = 0;
    rep(i,0,n){
        auto it = lower_bound(v.begin(), v.end(), make_pair(x-v[i].first, -1*n),[](const pair<int, int>&a, const pair<int, int> &b){
            return a.first < b.first || (a.first == b.first && a.second < b.second);
        });
        if (it != v.end() && (*it).first == x-v[i].first && (*it).second < v[i].second){
            cout << (-v[i].second+1) << " " <<(-(*it).second+1) << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}

int init(){

    return 0;
}