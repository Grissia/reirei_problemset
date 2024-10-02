#include <iostream>
using namespace std;
int main(){
    int n,arr[200005]={};
    cin >> n;
    for(int i = 1; i<=n ; i++){
        cin >> arr[i];
    }
    int ans[200005] = {};
    for(int i = 1; i<=n ; i++){
        ans[i] = arr[i]-arr[i-1];
    }
    for(int i = 1; i<=n ; i++){
        cout << ans[i] << ' ';
    }
}