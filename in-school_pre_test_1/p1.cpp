#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
#define int long long
#define f first
#define s second

signed main(){
    SIO;
    int arr[9];
    for(int i = 0; i<9; i++){
        cin >> arr[i];
    }
    int a,b,c,d,e,f;
    a = arr[0]*arr[4]*arr[8];
    b = arr[3]*arr[7]*arr[2];
    c = arr[6]*arr[1]*arr[5];

    d = arr[0]*arr[7]*arr[5];
    e = arr[3]*arr[1]*arr[8];
    f = arr[6]*arr[4]*arr[2];
    cout << llabs((a+b+c-d-e-f)/6) << endl;
    return 0;
}