#include <bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int main(){
    int n,m,t,c;
    cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    cin >> t;
    vector<vector<int>> boom;
    while(t--){
        vector<int>tmp(3,0);
        for(int i = 0; i<3; i++){
            cin >> tmp[i];
        }
        boom.push_back(tmp);
    }
    cin >> c;
    for(int k = 0; k<boom.size(); k++){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(abs(i-boom[k][1])+abs(j-boom[k][2]) == 0){
                    arr[i][j] -= 3*c;
                }
                else if(abs(i-boom[k][1])+abs(j-boom[k][2]) < boom[k][0]){
                    arr[i][j] -= c;
                }
                else if(abs(i-boom[k][1])+abs(j-boom[k][2])== boom[k][0]){
                    arr[i][j] -= c/2;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j]>=0) ans++;
        }
    }
    cout << ans;
}