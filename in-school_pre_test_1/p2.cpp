#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
const int MAXN = 1005;

vector<int> arr(MAXN);

int main(){
    SIO;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i<n; i++){
        if(arr[i] == 1){
            if(!arr[i-1]) arr[i-1] = -1;
            if(!arr[i+1]) arr[i+1] = -1;
        }
    }
    if(arr[0]) arr[1] = -1;

    int ans = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}