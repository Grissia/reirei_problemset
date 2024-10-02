#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[200005] = {};
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    long long int prefix[200005] = {};
    for(int i = 1 ; i<=n ; i++){
        prefix[i] = prefix[i-1] + arr[i-1];
    }
    for(int i = 0 ; i<n ; i++){
        cout << prefix[i+1] << ' ';
    }
}