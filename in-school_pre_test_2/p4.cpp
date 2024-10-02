#include <bits/stdc++.h>
using namespace std;

const char graph[6][6] =
{
{'p','h','0','q','g','6'},
{'4','m','e','a','1','y'},
{'l','2','n','o','f','d'},
{'x','k','r','3','c','v'},
{'s','5','z','w','7','b'},
{'j','9','u','t','i','8'}
};

int main(){
    string s,t;
    vector<char>ans;
    vector<vector<char>> ansans;
    cin >> s >> t;
    char search[6] = {'A','D','F','G','V','X'};
    for(int k = 0; k< s.size(); k++){
        for(int i = 0; i<6; i++){
            for(int j = 0; j<6; j++){
                if(s[k] == graph[i][j]){
                    ans.push_back(search[i]);
                    ans.push_back(search[j]);
                }
            }
        }
    }

    for(int i = 0; i<ans.size(); i+=t.size()){
        vector<char>tmp;
        for(int j = i; j<i+t.size(); j++){
            if(j >= ans.size()){
                tmp.push_back('#');
                continue;
            }
            tmp.push_back(ans[j]);
        }
        ansans.push_back(tmp);
    }

    pair<char,int> p[t.size()];
    for(int i = 0; i<t.size(); i++){
        p[i] = make_pair(t[i],i);
    }
    for(int i = 0; i<t.size(); i++){
        for(int j = 0; j<t.size()-1-i; j++){
            if(p[j].first > p[j+1].first) swap(p[j],p[j+1]);
        }
    }
    vector<vector<char>> ggez;
    for(int i = 0; i<ansans.size();i++){
        vector<char> tmp;
        for(int j = 0; j<t.size(); j++){
            tmp.push_back(ansans[i][p[j].second]);
        }
        ggez.push_back(tmp);
    }
    for(int i = 0; i<ggez[0].size();i++){
        for(int j = 0; j<ggez.size(); j++){
            if(ggez[j][i] == '#') continue;
            cout << ggez[j][i];
        }
    }

    /*
    00 01 02 03
    10 11 12 13
    20 21 22 23
        4 3

    for(int i = 0; i<ans.size(); i++) cout << ans[i] << ' ';
    cout << endl;
    for(int i = 0; i<ansans.size();i++){
        for(int j = 0; j<t.size(); j++){
            cout << ansans[i][j];
        }
    }
    for(int i = 0; i<t.size(); i++) cout << p[i].second << ' ';
    */

}

