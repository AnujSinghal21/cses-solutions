// Question: https://codeforces.com/problemset/problem/33/A
#ifdef LOCAL
#include "./lib/cpmlib.hpp"
// #define MULTIPLE_TESTS
#define USE_LL
//#define INTERACTIVE
//#define BUILD_SIMPLE
#endif

int countPaths(int i, int x, int y, string &s, vector<vector<bool> > &grid){
    if ((grid[x-1][y] && grid[x+1][y]) && (!grid[x][y-1] && !grid[x][y+1])){
        return 0;
    }
    if ((!grid[x-1][y] && !grid[x+1][y]) && (grid[x][y-1] && grid[x][y+1])){
        return 0;
    }
    
    if (x == 7 && y == 1 && i != 48){
        return 0;
    }
    if (x == 7 && y == 1 && i == 48){
        return 1;
    }

    int ans = 0;
    grid[x][y] = true;
    if (s[i] == 'L'){
        ans = grid[x][y-1]? 0: countPaths(i+1, x, y-1, s, grid);
    }else if (s[i] == 'R'){
        ans = grid[x][y+1]? 0: countPaths(i+1, x, y+1, s, grid);
    }else if (s[i] == 'U'){
        ans = grid[x-1][y]? 0: countPaths(i+1, x-1, y, s, grid);       
    }else if (s[i] == 'D'){
        ans = grid[x+1][y]? 0: countPaths(i+1, x+1, y, s, grid);
    }else{
        ans += grid[x][y-1]? 0: countPaths(i+1, x, y-1, s, grid);
        ans += grid[x][y+1]? 0: countPaths(i+1, x, y+1, s, grid);
        ans += grid[x-1][y]? 0: countPaths(i+1, x-1, y, s, grid);       
        ans += grid[x+1][y]? 0: countPaths(i+1, x+1, y, s, grid);
    }
    grid[x][y] = false;
    return ans;
}

int solve(int testCaseNumber){
    int n, x, k;
    string s;
    cin >> s;
    vector<vector<bool> > grid(9, vector<bool>(9, false));
    for (int i = 0; i < 9; i++){
        grid[0][i] = true;
        grid[8][i] = true;
        grid[i][0] = true;
        grid[i][8] = true;
    }
    int ans = countPaths(0, 1, 1, s, grid);
    cout << ans << endl;

    return 0;
}

int init(){

    return 0;
}