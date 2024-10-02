#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
using namespace std;
#define SIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

vector<int> v;
int arr[1005];
int n, num = 0;

bool ggez(){
    for(int i = 1; i<=n; i++)
    {
        if(arr[i]) return false;
    }
    return true;
}

signed main(){
    SIO;
    // input
    int tmp;
    while(cin >> tmp && tmp != -1)
    {
        v.push_back(tmp);
        arr[tmp]++;
        num++;
    }
    cin >> n;
    sort(v.begin(), v.end());
    // really
    
    if(ggez())
    {
        cout << "really\n";
        return 0;
    }
    // first line
    bool flag = true;
    int sec = 0; // for line two
    for(int i = 1; i<=n; i++)
    {
        if(!arr[i]){
            cout << i << ' ';
            flag = false;
        }
        else sec += (arr[i]-1);
    }
    if(flag) cout << "p\n";
    else cout << endl;
    // second line
    cout << sec << endl;
    // last line
    if(num == n) cout << "pass\n";
    else cout << "fail\n";
    // debug message
    cout << "=========================\n";
    for(int i = 0; i<=n; i++) cout << i << " : " << arr[i] << endl;

    return 0;
}