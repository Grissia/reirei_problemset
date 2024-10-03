#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

signed main(){
    SIO;
    string alfa;
    cin >> alfa;
    vector<string> s;
    string tmp;
    for(char c : alfa){
        if(c == '+'){
            s.push_back(tmp);
            tmp.clear();
            tmp.push_back('+');
        }
        else if(c == '-'){
            s.push_back(tmp);
            tmp.clear();
            tmp.push_back('-');
        }
        else tmp.push_back(c);
    }
    if(!(tmp.empty())) s.push_back(tmp);

    for(int i = 0; i<s.size(); i++){
        if(s[i][0] == '-'){
            for(int j = s[i].size()-1; j>=0; j--){
                if(s[i][j] == '+' || s[i][j] == '-') continue;
                cout << s[i][j];
            }
        }
        else{
            for(int j = 0; j<s[i].size(); j++){
                if(s[i][j] == '+' || s[i][j] == '-') continue;
                cout << s[i][j];
            }
        }
    }
    return 0;
}