#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[30] = {};
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }
    int start = -1,end = -1;
    for(int i = 0; i<n ; i++){
        if(arr[i]==1){
            start = i;
            break;
        }
    }
    for(int i = 0; i<n ; i++){
        if(arr[i]==1){
            end = i;
        }
    }
    if((start == -1)||(end == -1)){
        cout << 0 << endl;
        return 0;
    }
    for(int i = start+1 ; i<end ; i++){
        if(arr[i] == 9){
            if(arr[i+1]!=9){
                arr[i+1] = -1;
            }
            if(arr[i-1]!=9){
                arr[i-1] = -1;
            }
        }
    }
    int ans = 0;
    for(int i = start ; i<end ; i++){
        if(arr[i]==0){
            ans += 1;
        }
    }
    cout << ans;
}