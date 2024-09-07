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
    get_vec(v, n, int);
    vector<pair<int, pi> > v2;
    rep(i,0,n){
        rep(j,i+1, n){
            v2.push_back({v[i]+v[j], {i+1, j+1}});
        }
    }
    sort(all(v2));
    vi ans;
    rep(i, 0, v2.size()){
        // cout << v2[i].first << " {" << v2[i].second.first << ", " << v2[i].second.second << "}" << endl;
        if (ans.size()) break;
        auto itp = equal_range(v2.begin() + (i+1), v2.end(), make_pair(k - v2[i].first, v2[i].second), [](pair<int, pi> a, pair<int, pi> b){
            return a.first < b.first;
        });
        auto it = itp.first;
        if (it->first == k - v2[i].first && it->second.second != v2[i].second.first && it->second.first != v2[i].second.first && it->second.first != v2[i].second.second && it->second.second != v2[i].second.second){
            ans.push_back(v2[i].second.first);
            ans.push_back(v2[i].second.second);
            ans.push_back(it->second.first);
            ans.push_back(it->second.second);
        }else{
            auto it = itp.second;
            if (it->first == k - v2[i].first && it->second.second != v2[i].second.first && it->second.first != v2[i].second.first && it->second.first != v2[i].second.second && it->second.second != v2[i].second.second){
                ans.push_back(v2[i].second.first);
                ans.push_back(v2[i].second.second);
                ans.push_back(it->second.first);
                ans.push_back(it->second.second);
            }            
        }
    }
    if (ans.size()){
        // sort(all(ans));
        print(ans);
    }else{
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}

int init(){

    return 0;
}