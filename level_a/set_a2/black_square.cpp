#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    
    string s;
    cin >> s;
    
    ll res = 0;
    for(char c : s){
        if (c == '1') res += a1;
        else if (c == '2') res += a2;
        else if (c == '3') res += a3;
        else if (c == '4') res += a4;
    }
    
    cout << res << endl;
}