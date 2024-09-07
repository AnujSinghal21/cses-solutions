// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#define CPM_ORDERED_SET
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
// #define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using OrderedSet = tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>;

int solve(int testCaseNumber){
    int n, x, k, a,b;
    string s;
    cin >> n;
    vector<pair<pair<int, int>, int> > ranges(n);
    rep(i,0,n){
        cin >> a >> b;
        ranges[i] = {{a, b}, i};
    }
    sort(ranges.begin(), ranges.end(), [](pair<pi, int> &a, pair<pi, int> &b){
        return a.first.first < b.first.first || (a.first.first == b.first.first && a.first.second > b.first.second);
    });
    OrderedSet curr; 
    vi ans1(n, 0);
    rep(i, 0, n){
        int it = curr.order_of_key(ranges[i].first.second);
        ans1[ranges[i].second] = curr.size() - it;
        curr.insert(ranges[i].first.second);
    }
    sort(ranges.begin(), ranges.end(), [](pair<pi, int> &a, pair<pi, int> &b){
        return a.first.first > b.first.first || (a.first.first == b.first.first && a.first.second < b.first.second);
    });
    OrderedSet curr2; 
    vi ans2(n, 0);
    rep(i, 0, n){
        int it = curr2.order_of_key(ranges[i].first.second+1);
        ans2[ranges[i].second] = it;
        curr2.insert(ranges[i].first.second);
    }
    print(ans2);
    print(ans1);
    return 0;
}

int init(){

    return 0;
}
