#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

int arr[1005][1005] = {};

int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

int main(){
    SIO;
    int h,w,k;
    long long total = 0;
    cin >> h >> w >> k;
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            cin >> arr[i][j];
            total += arr[i][j];
        }
    }
    while(k--){
        int tom[1005][1005] = {};
        for(int i = 0; i<h; i++){
            for(int j = 0; j<w; j++){
                int all = 0;
                int higher = 0;
                int lower = 0;
                for(int x = 0; x<4; x++){
                    int newx = i+dir[x][0];
                    int newy = j+dir[x][1];
                    if(newx >= h || newy >= w || newx < 0 || newy < 0) continue;
                    all++;
                    if(arr[newx][newy]>arr[i][j]) higher++;
                    if(arr[newx][newy]<arr[i][j]) lower++;
                }
                if(higher > all/2.0){
                    // cout << i << ' ' << j << "++\n";
                    tom[i][j]++;
                }
                if(lower > all/2.0){
                    // cout << i << ' ' << j << "--\n";
                    tom[i][j]--;
                }
            }
        }
        for(int i = 0; i<h; i++){
            for(int j = 0; j<w; j++){
                arr[i][j] += tom[i][j];
            }
        }
    }
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            total -= arr[i][j];
        }
    }
    cout << total*-1;
    return 0;
}