#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

signed main(){
    SIO;
    int n;
    cin >> n;
    vector<int> arr(35,0);
    for(int i = 1; i<=n; i++){
        cin >> arr[i];
    }
    int t;
    cin >> t;
    int dir = 0;
    
    if(t==1) dir = 1;
    else if(t == n) dir = -1;
    else if(arr[t]-arr[t+1] > arr[t]-arr[t-1]) dir = 1;
    else dir = -1;

    int location = t;
    while(location+dir >= 1 && location+dir <= n){
        if(arr[location]>=arr[location+dir]) location += dir;
        else break;
    }
    cout << location;
    return 0;
}