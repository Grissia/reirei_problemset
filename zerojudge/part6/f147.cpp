#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

struct order{
    string name;
    int price;
};

int main(){
    SIO;
    struct order alfa[6];
    struct order bravo[5];
    alfa[1].name = "Medium Wac";
    alfa[2].name = "WChicken Nugget";
    alfa[3].name = "Geez Burger";
    alfa[4].name = "ButtMilk Crispy Chicken";
    alfa[5].name = "Plastic Toy";
    bravo[1].name = "German Fries";
    bravo[2].name = "Durian Slices";
    bravo[3].name = "WcFurry";
    bravo[4].name = "Chocolate Sunday";

    alfa[1].price = 4;
    alfa[2].price = 8;
    alfa[3].price = 7;
    alfa[4].price = 6;
    alfa[5].price = 3;
    bravo[1].price = 2;
    bravo[2].price = 3;
    bravo[3].price = 5;
    bravo[4].price = 7;

    int n;
    int total = 0;
    while (cin >> n && n)
    {
        int num;
        cin >> num;
        switch (n)
        {
        case 1:
            cout << alfa[num].name << ' ' << alfa[num].price << endl;
            total += alfa[num].price;
            break;
        case 2:
            cout << bravo[num].name << ' ' << bravo[num].price << endl;
            total += bravo[num].price;
            break;
        default:
            break;
        }
    }
    cout << "Total: " << total << endl;
    return 0;
}