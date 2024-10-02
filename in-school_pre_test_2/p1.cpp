#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,e,a,b;
    cin >> d >> e >> a >> b;
    int o_a = a;
    int o_b = b;
    bool flag1 = false;
    bool flag2 = false;
    int tmp = 0;
    while(d--){
        a -= e;
        b -= e;
        if(a <= 0) flag1 = true;
        if(b <= 0) flag2 = true;
        // cout << a << ' ' << b << endl;
        if(d <= 0) continue;
        tmp += e;

        if(tmp/3){
            a += (tmp/3)*5;
            // cout << "a:" << a;
            tmp = tmp%3;
            // cout << "tmp:" << tmp << endl;
        }
        if(a <= 0) flag1 = true;
        if(b <= 0) flag2 = true;
        if(b < o_b/2) b*= 3;
        // cout << a << ' ' << b << endl;
    }
    int ans1 = a, ans2 = b;
    if(flag1) ans1 = 0;
    if(flag2) ans2 = 0;
    cout << ans1 << ' ' << ans2 << endl;
}