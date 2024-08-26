// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

void recurse(int s, int h, int e, int n,vector<pair<int, int> > &moves){
    if (n == 1){
        moves.push_back({s,e});
        return;
    }
    recurse(s, e, h, n-1, moves);
    moves.push_back({s, e});
    recurse(h, s, e, n-1, moves);
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    vector<pair<int, int> > moves;
    recurse(1,2,3,n,moves);
    cout << moves.size() << endl;
    for (auto m: moves){
        print(m);
    }
    
    return 0;
}

int init(){

    return 0;
}