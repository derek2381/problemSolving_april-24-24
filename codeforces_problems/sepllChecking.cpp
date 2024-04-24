// problem link
// https://codeforces.com/problemset/problem/1722/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str,actual = "Timur";
        cin >> str;
        string res;
        for(char i : str){
            if( i >= 97 && i <= 112 )
             res += i;
             else
                res += i;
        }


        sort(res.begin(), res.end());
        sort(actual.begin(), actual.end());


        if(res == actual){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
