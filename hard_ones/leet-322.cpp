#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
// 為什麼我要放上面這段，因為看到一堆錯誤很不爽
class Solution {
public:
    map<int,int> mp; // 用來存答案，才不用重複計算
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0; // 遞迴到底就是零
        if(mp[amount]) return mp[amount]; // 如果算過就不再算一次
        int ans = INT_MAX; // 存這回的答案
        for(auto i : coins){ // 用 range-based for 去讀每一種幣值，假設先找這個幣值
            if(amount < i) continue; // 如果幣值大於總共要找的就跳過
            int tmp = coinChange(coins, amount-i); // 如果用這個幣值，下一次最少找多少個硬幣
            if(tmp == -1) continue; // 如果下次不可能找到，那這次也不可能是這個幣值
            ans = min(ans, tmp+1); // 把答案更新為最少找錢數(tmp+1是因為每往下遞迴一階就會多找一個硬幣，所以要加回來)
        }
        if(ans == INT_MAX) mp[amount] = -1; // 如果 ans 都沒變表示完全無解
        else mp[amount] = ans;
        return mp[amount];
    }
};