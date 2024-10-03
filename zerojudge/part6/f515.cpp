#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
void upper(string &s){
    for(char &c : s){
        c = toupper(c);
    }
}
signed main(){
    SIO;
    vector<string> s;
    string alfa;
    getline(cin, alfa);
    string tmp;
    for(int i = 0; i<alfa.size(); i++){
        if(alfa[i] == ' '){
            s.push_back(tmp);
            tmp.clear();
        }
        else tmp.push_back(alfa[i]);
    }
    if(!(tmp.empty())) s.push_back(tmp);

    for(int i = 0; i<s.size(); i++){
        upper(s[i]);
        if(s[i] == "FOR") s[i] = "4";
        else if(s[i] == "TO") s[i] = "2";
        else if(s[i] == "AND") s[i] = "n";
        else if(s[i] == "YOU") s[i] = "u";
        else s[i] = s[i][0];
        cout << s[i];
    }
    return 0;
}