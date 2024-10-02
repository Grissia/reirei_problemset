#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

signed main(){
    SIO;
    int s,e,b,k;
    cin >> s >> e >> b >> k;
    int clap = 0;
    bool flag = false;
    int i;
    for(i = s; i<=e; i++){
        if(!(i%b)) clap++;
        else{
            string s = to_string(i);
            for(auto j : s){
                int x = j-'0';
                if(x == b){
                    clap++;
                    break;
                }
            }
        }
        if(clap==k){
            flag = true;
            break;
        }        
    }
    if(flag) cout << i;
    else cout << -1;
    return 0;
}