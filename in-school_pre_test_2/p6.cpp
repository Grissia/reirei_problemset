#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n,m;
    cin >> n >> m;
    vector<int>w(n,0);
    vector<int>g(m,0);
    for(int i = 0; i<n; i++) cin >> w[i];
    for(int i = 0; i<m; i++) cin >> g[i];
    sort(w.begin(), w.end());
    sort(g.begin(), g.end());
    long long ans = 0;
    int ind = n-1;
    for(int j = m-1; j>=0; j--){
        for(int i = ind; i>=0; i--){
            if(g[j]>=w[i]){
                // cout << j << "���" << i << endl;
                ind = i;
                ans+=w[i];
                w[i] = 1e12;
                break;
            }

        }
    }
    cout << ans;
}