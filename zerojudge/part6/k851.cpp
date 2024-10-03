// 95% reason unknown

#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

signed main(){
    SIO;
    int n;
    string s;
    vector<string> alfa;
    cin >> n >> s;
    string tmp;
    for(int i = 0; i<s.size(); i+=n){
        for(int j = i; j<i+n && j<s.size(); j++){
            tmp.push_back(s[j]);
        }
        alfa.push_back(tmp);
        tmp.clear();
    }

    if(!(tmp.empty())) alfa.push_back(tmp);
    vector<int> ans;
    for(int i = 0; i<alfa.size(); i++){
        int tmp = 0;
        for(int j = 0; j<alfa[i].size(); j++){
            tmp += alfa[i][j] - '0';
        }
        ans.push_back(tmp);
    }
    sort(ans.begin(), ans.end());

    int last = ans[0];
    bool flag = false;
    for(int i = 1; i<ans.size(); i++){
        if(ans[i] == last){
            flag = true;
            break;
        }
        else{
            last = ans[i];
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";
    return 0;
}