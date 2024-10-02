#include <iostream>
using namespace std;
int main(){
    int a;
    int mx;
    cin >> a;
    mx = a;
    while(cin >> a && a!=0){
        if(a%7==0 && mx%7!=0){
            mx = a;
        }
        else if(a%7==0 && a%70 > mx%70){
            mx = a;
        }
        else {
            if(mx%7!=0 && a%77 < mx%77){
                mx = a;
            }
        }
    }
    cout << mx << endl;
}