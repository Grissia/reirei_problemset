#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

signed main(){
    SIO;
    string n, m;
    cin >> n >> m;
    string s = n + m;
    long long ans = 0;
    bool flag = false;
    for(auto i:s){
        int num = i - '0';
        if(flag){
            ans -= num;
            flag = false;
        }
        else{
            ans += num;
            flag = true;
        }
    }
    if(ans%11) cout << "No";
    else cout << "Yes";
    return 0;
}