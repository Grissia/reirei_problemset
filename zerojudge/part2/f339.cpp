#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
const int MAXN = 1e5 + 10;
int pre[MAXN];

signed main(){
    SIO;
    int n, m;
    while (cin >> n >> m)
    {
        while(m--){
            int a,b;
            cin >> a >> b;
            pre[a]++;
            pre[b]--;
        }
        for(int i = 1; i<n; i++){
            pre[i] += pre[i-1];
        }
        int a;
        bool flag1 = false;
        for(int i = 0; i<n; i++){
            if(!pre[i] && !flag1){
                a = i;
                flag1 = true;
            }
            else if(flag1 && pre[i]){
                flag1 = false;
                cout << a << ' ' << i << endl;
            }
        }
        if(flag1){
            cout << a << ' ' << n << endl;
        }
    }
    
    
    return 0;
}