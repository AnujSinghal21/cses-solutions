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
    rep(i,0,(k-1)/2){
        lh.insert(cpy[i]);
    }
    int md = cpy[(k-1)/2];
    rep(i,(k+1)/2, k){
        rh.insert(cpy[i]);
    }

    vi ans;
    ans.push_back(md);
    if (k == 1){
        print(v);
        return 0;
    }else if (k == 2){
        multiset<int> st;
        st.insert(v[0]);
        st.insert(v[1]);
        rep(i,2,n){
            if (v[i-2] == *st.begin()){
                st.erase(st.begin());
            }else{
                st.erase(--st.end());
            }
            st.insert(v[i]);
            ans.push_back(*st.begin());
        }
        print(ans);
        return 0;
    }
    rep(i,k,n){
        int half1 = md < v[i];
        int half2 = rh.find(v[i-k]) != rh.end();
        if (half1){
            rh.insert(v[i]);
        }else {
            lh.insert(v[i]);
        }
        if (half2){
            rh.erase(rh.find(v[i-k]));
        }else{
            if (md == v[i-k]){
                md = *(lh.rbegin());
                lh.erase(--(lh.end()));
            }else{
                lh.erase(lh.find(v[i-k]));
            }
        }
        if (half1 != half2){
            if (half2){
                rh.insert(md);
                md = *(lh.rbegin());
                lh.erase(--(lh.end()));
            }else{
                lh.insert(md);
                md = *(rh.begin());
                rh.erase(rh.begin());
            }
        }
        ans.push_back(md);
    }
    print(ans);

    return 0;
}

int init(){

    return 0;
}