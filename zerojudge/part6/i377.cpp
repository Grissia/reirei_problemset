// 90%
#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

int r, c;
int anslen;
string tar;
char arr[80][80] = {};
//                     下     右      左     上       右下   左上     左下     右上
const int dir[8][2] = {{1,0}, {0,1}, {0,-1}, {-1,0}, {1,1}, {-1,-1}, {1,-1}, {-1,1}};

bool check(int x, int y, int direction, int index){
    if(index >= anslen) return true;
    if(arr[x][y] == tar[index] && check(x+dir[direction][0], y+dir[direction][1], direction, index+1)) return true;
    return false;
}

int main(){
    SIO;
    cin >> r >> c;
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=c; j++){
            cin >> arr[i][j];
            arr[i][j] = toupper(arr[i][j]);
        }
    }
    cin >> tar;
    anslen = tar.size();
    for(auto &i:tar) i = toupper(i);
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=c; j++){
            for(int k = 0; k<8; k++){
                int modx = i + (anslen-1)*dir[k][0];
                int mody = j + (anslen-1)*dir[k][1];
                if(modx > r || mody > c || modx <= 0 || mody <= 0) continue;
                if(check(i, j, k, 0)){
                    cout << i << ' ' << j << endl;
                    cout << modx << ' ' << mody << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
    
    return 0;
}