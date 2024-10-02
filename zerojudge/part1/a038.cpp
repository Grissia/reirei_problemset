#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

signed main(){
    SIO;
    string s;
    cin >> s;
    bool flag = true;
    bool zero = true;
    for(int i = s.size()-1; i>=0; i--){
        int num = s[i] - '0';
        if(flag){
            if(num){
                flag = false;
            }
            else continue;
        }
        cout << s[i];
        zero = false;
    }
    if(zero){
        cout << 0;
    }
    return 0;
}