#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

int main(){
    SIO;
    string s, t;
    cin >> s >> t;
    int ind = 0;
    int lena = s.size();
    int lenb = t.size();
    while(ind<lenb){
        bool flag = true;
        for(int i = 0; i<lena; i++){
            if(s[i] == t[ind]){
                flag = false;
                cout << i+1 << ' ';
                s[i] = ' ';
                break;
            }
        }
        if(flag){
            cout << "X ";
        }
        ind++;
    }
    
    
    return 0;
}