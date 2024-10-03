// not finish yet

#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

const int dir[8][2] = {{0,1},{1,0},{0,-1},{-1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
const int MAXN = 80;
int arr[MAXN][MAXN] = {};
bool found( int x, int y, int direction){

}
int main(){
    SIO;
    int r, c;
    cin >> r >> c;
    string tar;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >> arr[i][j];
            arr[i][j] = toupper(arr[i][j]);
        }
    }
    cin >> tar;
    

    return 0;
}