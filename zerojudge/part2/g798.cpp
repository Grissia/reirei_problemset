#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

signed main(){
    SIO;
    int tmp, n;
    vector<int> arr;
    int len = 0;
    while(cin >> tmp && tmp){
        arr.push_back(tmp);
        len++;
    }
    cin >> n;
    while (n--){
        vector<int> tomorrow(len,0);
        for(int i = 1; i<len-1; i++){
            int x = arr[i]*0.05;
            if(arr[i] > arr[i+1]){
                tomorrow[i+1] += x;
            }
            if(arr[i] > arr[i-1]){
                tomorrow[i-1] += x;
            }
        }
        if(arr[0] > arr[1]){
            int x = arr[0]*0.1;
            tomorrow[1]+=x;
        }
        if(arr[len-1] > arr[len-2]){
            int x = arr[len-1]*0.1;
            tomorrow[len-2]+=x;
        }
        for(int i = 0; i<len; i++){
            arr[i] += tomorrow[i];
        }
    }
    for(int i = 0; i<len; i++){
        cout << arr[i] << " \n"[i==len-1];
    }
    
    return 0;
}