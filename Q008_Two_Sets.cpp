// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int solve(int testCaseNumber){
    int n, x = 0, k;
    string s;
    cin >> n;
    int l = 1, r = n;
    vector<int> a, b;
    if (n == 1){
        nope
        return 0;
    }
    if (n & 1){
        a.push_back(l);
        b.push_back(r);
        a.push_back(r-1);
        l++;
        r -= 2;
    }
    while(l < r){
        if ((r - l + 1) % 4 == 0){
            a.push_back(r);
            a.push_back(l);
            l++;r--;
            b.push_back(l);
            b.push_back(r);                
            l++;r--;
        }else{
            x = 1;
            break;
        }
    }
    if (x){
        nope
    }else{
        yeah
        cout << a.size() << endl;
        print(a);
        cout << b.size() << endl;
        print(b);
    }
    return 0;
}

int init(){

    return 0;
}