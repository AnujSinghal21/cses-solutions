// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

vector<string> newBoard(vector<string> board, int x, int y){
    rep(i,0,8){
        rep(j,0,8){
            if (i == x || j == y || (i-j) == (x-y) || (i+j) == (x+y)){
                board[i][j] = '*';
            }
        }
    }
    return board;
}

int count(vector<string> &board, int after, int to_place){
    if (to_place == 0){
        return 1;
    }
    int ans = 0, f = 0;
    for (int i = after+1; i < 64; i++){
        int x = i / 8;
        int y = i % 8;
        if (board[x][y] == '.'){
            f = 1;
            vector<string> nb = newBoard(board, x, y);
            ans += count(nb, i, to_place - 1);
        }
    }
    return ans;
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    vector<string> board(8);
    rep(i,0,8){
        cin >> board[i];
    }
    cout << count(board, -1, 8) << endl;

    return 0;
}

int init(){

    return 0;
}