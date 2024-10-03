#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

signed main(){
    SIO;
    string s, alfa;
    char t;
    cin >> s >> t;
    for(char i:s){
        if(i == t) continue;
        alfa.push_back(i);
    }
    string tmp = alfa;
    reverse(tmp.begin(), tmp.end());
    if(tmp == alfa) cout << "Yes";
    else cout << "No";
    
    return 0;
}