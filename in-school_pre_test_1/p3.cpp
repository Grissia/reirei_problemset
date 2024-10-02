#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
#define int long long

signed main(){
    SIO;
    int a,b;
    cin >> a >> b;
    bool flag = false;
    for(int i = a; i<=b; i++){
        if(i%11 == 0){
            flag = true;
            break;
        }
    }
    if(!flag){
        cout << 0 << endl;
        return 0;
    }
    a /= 11;
    b /= 11;
    cout << b-a+1 << endl;
    return 0;
}