#include <iostream>
using namespace std;
int main(){
    int n,w;
    cin >> n >> w;
    int total = 0,days = 0;
    bool tirg = false;
    for(int i = 1; i<=n ; i++){
        total += w;
        days++;
        int m,tmp,usage=0;
        cin >> m;
        for(int j = 0; j<m ; j++){
            cin >> tmp;
            usage += tmp;
        }
        total -= usage;
        if(total=0){
            tirg = true;
            break;
        }
    }
    if(tirg){
        cout << days;
    }
    else{
        cout << -1;
    }
}