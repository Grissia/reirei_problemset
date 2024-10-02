#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;
    int max1 = 0,max2 = 0;
    for (int i = 0;i<str.size();i++){
        if(str[i] > max1){
            max2 = max1;
            max1 = str[i];
        }
        else if (str[i] > max2){
            max2 = str[i];
        }
    }
    int mx1 = (int)max1 - '0';
    int mx2 = (int)max2 - '0';
    int ad = mx1*mx1 + mx2*mx2;
    string check;
    
    for(int i = str.size()-3 ; i <= str.size()-1 ; i++){
        check += str[i];
    }
    
    int ncheck = stoi(check);
    if(ncheck == ad){
        cout << "Good Morning!";

    }
    else{
        cout << "SPY!";
    }
}