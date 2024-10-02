#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int tmp = n;
    int ans = 0;
    while(tmp-m != n){
        tmp *= 2;
        ans++;
    }
    cout << ans << endl;
}