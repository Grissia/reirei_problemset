#include <iostream>

using namespace std;
int main(){
    int n,m;
    while(cin >> n >> m){ // 因為輸入到EOF 所以用while來讀，如果沒有給值while就結束
        int arr[100005] = {}; // 用來存輸入的數列
        for(int i = 0; i<n ; i++ ){
            cin >> arr[i];
        }
        long long int prefix[100005] = {};//前綴和數列
        for(int i = 1; i<=n ; i++){
            prefix[i] = prefix[i-1]+arr[i-1]; // 前綴和計算
        }
        int l,r;
        for(int i = 0; i<m ; i++){
            cin >> l >> r; // 輸入l,r
            cout << prefix[r]-prefix[l-1] << endl; // 輸出前綴和[r]-前綴和[l-1]
        }

    }
}