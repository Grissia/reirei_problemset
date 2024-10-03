#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
string s, t;

main(){
    SIO;
    cin >> s >> t;
    int ind = s.find(t);
    int len = t.size();
    
    for(int i = s.size()-1; i>=ind+len; i--){
        cout << s[i];
    }
    for(int i = ind; i<ind+len; i++){
        cout << s[i];
    }
    for(int i = ind-1; i>=0; i--){
        cout << s[i];
    }
    return 0;
}