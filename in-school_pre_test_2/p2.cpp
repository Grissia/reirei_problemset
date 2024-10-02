#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
char w[MAXN][MAXN] = {'0'};
int g[MAXN][MAXN] = {'0'};
char f[MAXN][MAXN] = {'0'};
int mix[MAXN][MAXN] = {};

int main(){
    int r,c;
    cin >> r >> c;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >> w[i][j];
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >> g[i][j];
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            f[i][j] = '0';
        }
    }


    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(w[i][j] != '0'){
                if(w[i][j] == 'S'){
                    for(int x = 0; x<g[i][j]; x++){
                        if(i+x >= r || j >= c || i+x < 0 || j < 0) continue;
                        mix[i+x][j]++;
                        f[i+x][j] = 'S';
                    }
                }
                else if(w[i][j] == 'E'){
                    for(int x = 0; x<g[i][j]; x++){
                        if(i >= r || j+x >= c || i < 0 || j+x < 0) continue;
                        mix[i][j+x]++;
                        f[i][j+x] = 'E';
                    }
                }
                else if(w[i][j] == 'W'){
                    for(int x = 0; x<g[i][j]; x++){
                        if(i >= r || j-x >= c || i < 0 || j-x < 0) continue;
                        mix[i][j-x]++;
                        f[i][j-x] = 'W';
                    }
                }
                else if(w[i][j] == 'N'){
                    for(int x = 0; x<g[i][j]; x++){
                        if(i-x >= r || j >= c || i-x < 0 || j < 0) continue;
                        mix[i-x][j]++;
                        f[i-x][j] = 'N';
                    }
                }
            }
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(mix[i][j] >= 2){
                cout << mix[i][j] << " \n"[j == c-1];
                continue;
            }
            cout << f[i][j] << " \n"[j == c-1];
        }
    }
}