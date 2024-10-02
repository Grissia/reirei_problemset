#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[16];
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i<= 15; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    int ans = 0;
    for(int i = 0; i<=n; i++){
        ans += arr[i];
    }
    cout << ans;

}