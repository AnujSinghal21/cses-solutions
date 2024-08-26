// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int recurse(vector<int> &v, int offset, int start, int n){
    if (n == 0){
        v.push_back(offset);        
        return 0;
    }
    if (start >= 1<<(n-1)){
        int e = recurse(v, offset + (1<<(n-1)), start - (1 << (n-1)), n-1);
        int j = recurse(v, offset, e, n-1);
        return j;
    }else {
        int j = recurse(v, offset, start, n-1);
        int e = recurse(v, offset + (1<<(n-1)), j, n-1);
        return (1<<(n-1)+e);
    }
}


int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> n;
    vector<int> nums;
    recurse(nums, 0, 0, n);
    for (auto num: nums){
        cout << bit_string(num, n) << endl;
    }

    return 0;
}

int init(){

    return 0;
}