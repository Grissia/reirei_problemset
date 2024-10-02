#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
// 前面都是我的萬用開頭 不要管他

int arr[1005][1005] = {};
// 主要陣列
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
// 方向 上下左右
int main(){
    // 輸入
    SIO;
    int h,w,k;
    long long total = 0; // 順便算總和
    cin >> h >> w >> k;
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            cin >> arr[i][j];
            total += arr[i][j];
        }
    }
    // 主要程式碼
    while(k--){
        int tom[1005][1005] = {}; // 用來存下一次的變化量 (tomorrow)
        for(int i = 0; i<h; i++){
            for(int j = 0; j<w; j++){
                int all = 0; // 附近有幾個
                int higher = 0; // 比較大的
                int lower = 0; // 比較小的
                for(int x = 0; x<4; x++){ // 讀附近四個方向
                    int newx = i+dir[x][0]; 
                    int newy = j+dir[x][1];
                    if(newx >= h || newy >= w || newx < 0 || newy < 0) continue; // 邊界判斷
                    all++;
                    if(arr[newx][newy]>arr[i][j]) higher++;
                    if(arr[newx][newy]<arr[i][j]) lower++;
                }
                if(higher > all/2.0){
                    tom[i][j]++;
                }
                if(lower > all/2.0){ // 這裡也可以寫 else if 只是我覺得寫 if 的排版比較好看
                    tom[i][j]--;
                }
            }
        }
        for(int i = 0; i<h; i++){
            for(int j = 0; j<w; j++){
                arr[i][j] += tom[i][j]; // 把 tomorrow 的合併到主要陣列
            }
        }
    }
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            total -= arr[i][j]; // 把總和減掉主要陣列的每一個值 (如果總和增加的話 total就會變負的)
        }
    }
    cout << total*-1; // 再轉回正的
    return 0;
}