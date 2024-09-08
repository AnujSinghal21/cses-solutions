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
    get_vec(v,n,int);
    multiset<int> lh, rh;
    vi cpy(k);
    rep(i, 0, k) cpy[i] = v[i];
    sort(cpy.begin(), cpy.end());
    int lhsum = 0, rhsum = 0;
    rep(i,0,(k-1)/2){
        lh.insert(cpy[i]);
        lhsum += cpy[i];
    }
    int md = cpy[(k-1)/2];
    rep(i,(k+1)/2, k){
        rh.insert(cpy[i]);
        rhsum += cpy[i];
    }

    vi ans;
    ans.push_back(rhsum - rh.size() * md + lh.size() * md - lhsum);
    if (k == 1){
        ans = vi(n, 0);
    }else if (k == 2){
        ans = vi(n-1, 0);
        rep(i,0,n-1){
            ans[i] = abs(v[i+1] - v[i]);
        }
    }
    else {
        rep(i,k,n){
            int half1 = md < v[i];
            int half2 = rh.find(v[i-k]) != rh.end();
            if (half1){
                rh.insert(v[i]);
                rhsum += v[i];
            }else {
                lh.insert(v[i]);
                lhsum += v[i];
            }
            if (half2){
                rhsum -= v[i-k];
                rh.erase(rh.find(v[i-k]));
            }else{
                if (md == v[i-k]){
                    md = *(lh.rbegin());
                    lhsum -= md;
                    lh.erase(--(lh.end()));
                }else{
                    lhsum -= *lh.find(v[i-k]);
                    lh.erase(lh.find(v[i-k]));
                }
            }
            if (half1 != half2){
                if (half2){
                    rh.insert(md);
                    rhsum += md;
                    md = *(lh.rbegin());
                    lhsum -= md;
                    lh.erase(--(lh.end()));
                }else{
                    lh.insert(md);
                    lhsum += md;
                    md = *(rh.begin());
                    rhsum -= md;
                    rh.erase(rh.begin());
                }
            }
            ans.push_back(rhsum - rh.size() * md + lh.size() * md - lhsum);
            // ans.push_back(md);
        }
    }
    print(ans);
    return 0;
}

int init(){

    return 0;
}