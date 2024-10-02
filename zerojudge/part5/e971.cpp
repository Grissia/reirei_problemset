#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
int arr[105][105];
signed main(){
    SIO;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        bool flag1 = false;
        int one;
        for(int j = 0; j<m; j++){
            if(!flag1 && arr[i][j]){
                flag1 = true;
                one = j;
            }
            else if(flag1 && arr[i][j]){
                flag1 = false;
                for(int k = one; k<j; k++) arr[i][k] = 1;
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << arr[i][j] << " \n"[j==m-1];
        }
    }
    return 0;
}