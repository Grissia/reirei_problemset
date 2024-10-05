#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

int main(){
    SIO;
    int n;
    map<int,int> mp;
    cin >> n;
    for(int i = 0; i<n; i++){
        int l, r;
        cin >> l >> r;
        mp[l]++;
        if(!mp[r]) mp[r]; // 注意這行
        /*
        因為如果只是照一般差分數列，不寫這行的話
        就會處理不到 r 的位置
        所以 mp[r] 必須有一個值
        設定為 0 的話也不會影響到差分數列
        */
        mp[r+1]--;
    }
    /*
    這邊不先計算前綴和
    而是直接用 tmp 這個變數去加，可以簡化程式
    所以 tmp 就會是與運行到 mp[i] 的前綴和相等
    */
    int tmp = 0; // 相當於算完前綴和後的 mp[i].second
    int ans = 0; // 最優解的值
    int ind = -1; // 最優解的座標
    for(auto &i:mp){
        tmp += i.second;
        if(tmp > ans){
            ans = tmp;
            ind = i.first;
        }
        else if(tmp == ans){
            ind = max(ind, i.first); // 座標優先取大者
        }
    }
    cout << ind;
    return 0;
}