#include <iostream>

using namespace std;

int main(){
    int m, a;
    cin >> m >> a;
    for(int i = 0; i<m ; i++){
        int k;
        cin >> k;
        if(a<=k){
            break;
        }
        a += k;
    }
    cout << a << endl;
}