// not finish yet

#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

const int dir[8][2] = {{0,1},{1,0},{0,-1},{-1,0},{1,1},{-1,-1},{-1,1},{1,-1}};
const int MAXN = 80;
int arr[MAXN][MAXN] = {};
int r, c;
string tar;

bool found(int x, int y, int direction, int times){
    cout << "===================" << endl;
    cout << x << ' ' << y << ' ' << direction << ' ' << times << endl;

    if(times == tar.size() && tar[times-1] == arr[x][y]) return true;
    if(times > tar.size()) return false;
    if(found(x+dir[direction][0], y+dir[direction][1], direction, times+1)) return true;
    else return false;

    return true;
}
int main(){
    SIO;
    cin >> r >> c;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >> arr[i][j];
            arr[i][j] = toupper(arr[i][j]);
        }
    }
    cin >> tar;
    vector<int> ans;

    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            for(int k = 0; k<8; k++){
                if(found(i,j,k,1)){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
    }
    for(int i = 0; i<ans.size(); i++) cout << ans[i] << ' ';
    return 0;
}
