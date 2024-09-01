// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x, k, y;
    cin >> n >> k;
    int ans = 1;
    vector<int> v(n), pos(n);
    rep(i,0,n){
        cin >> v[i];
        v[i]--;
        pos[v[i]] = i;
    }
    rep(i,0,n){
        if (v[i] != 0 && pos[v[i]-1] > i){
            ans++;
        }
    }
    rep(i,0,k){
        cin >> x >> y;
        x--;y--;
        int c1 = v[x], c2 = v[x]+1, c3 = v[y], c4 = v[y]+1;
        if (c1 == c3+1 || c4 >= n){
            c4 = -1;
        }
        if (c3 == c1 + 1 || c2 >= n){
            c2 == -1;
        }
        if (c1 > 0){
            if (pos[c1 - 1] >= y && pos[c1 - 1] < x){
                ans++;
            }else if (pos[c1 - 1] <= y && pos[c1 - 1] > x){
                ans--;
            }
        }
        if (c2 > 0){
            if (y > pos[c2] && x < pos[c2]){
                ans++;
            }else if (y < pos[c2] && x > pos[c2]){
                ans--;
            }
        }
        if (c3 > 0){
            if (pos[c3 - 1] >= x && pos[c3 - 1] < y){
                ans++;
            }else if (pos[c3 - 1] <= x && pos[c3 - 1] > y){
                ans--;
            }
        }
        if (c4 > 0){
            if (x > pos[c4] && y < pos[c4]){
                ans++;
            }else if (x < pos[c4] && y > pos[c4]){
                ans--;
            }
        }
        swap(pos[v[x]], pos[v[y]]);
        swap(v[x], v[y]);
        cout << ans << endl;
    }
    return 0;
}

int init(){

    return 0;
}