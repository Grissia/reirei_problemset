#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

signed main(){
    SIO;
    string s;
    cin >> s;
    for(int i = 0; i<s.size(); i++){
        if(s[i] <= 'Z'){
            s[i] += 'a';
            s[i] -= 'A';
        }
    }

    vector<int> ans;
    int cnt = 0;
    int session = 1;
    for(int i = 0; i<s.size(); i++){
        if(session == 1 && s[i] == 't'){
            session = 2;
            ans.push_back(i+1);
        }
        if(session == 2 && s[i] == 'y'){
            session = 3;
            ans.push_back(i+1);
        }
        if(session == 3 && s[i] == 's'){
            session = 4;
            ans.push_back(i+1);
        }
        if(session == 4 && s[i] == 'h'){
            session = 1;
            ans.push_back(i+1);
            cnt++;
        }
    }
    cout << cnt << endl;
    if(cnt) for(int i = 0; i<ans.size(); i++){
        if(cnt*4-1 < i) break;
        cout << ans[i] << " \n"[i != 0 && i%4 == 3];
    }
    return 0;
}