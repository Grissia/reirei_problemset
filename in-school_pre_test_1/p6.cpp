#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

int graph[10][10];
bool flag = false;
int p;
int origin_x, origin_y;

void flip(int x, int y, int x_add, int y_add){
    cout << "call flip(" << x << ',' << y << ',' << x_add << ',' << y_add << endl;
    if(x > 8 || x < 0 || y > 8 || y < 0) return;
    if(!graph[x][y]) return;
    if(flag){
        graph[x][y] = p;
        return;
    }
    
    if((x != origin_x || y != origin_y) && graph[x][y] == p){
        flag = true;
        return;
    }
    flip(x+x_add, y+y_add, x_add, y_add);
    if(flag){
        graph[x][y] = p;
    }
}
int main(){
    SIO;
    for(int i = 1; i<=8; i++){
        for(int j = 1; j<=8; j++) cin >> graph[i][j];
    }
    int x,y;
    cin >> x >> y >> p;
    origin_x = x;
    origin_y = y;
    graph[x][y] = p;
    int dir[8][2] = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
    for(int i = 0; i<8; i++){
        flip(x,y,dir[i][0],dir[i][1]);
        flag = false;
    }
    for(int i = 1; i<=8; i++){
        for(int j = 1; j<=8; j++){
            if(graph[i][j] == 0) cout << ". ";
            else if(graph[i][j] == 1) cout << "O ";
            else cout << "@ ";
        }
        cout << endl;
    }

    return 0;
}