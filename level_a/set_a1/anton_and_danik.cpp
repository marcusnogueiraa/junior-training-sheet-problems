#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    
    int a = 0, b=0;
    for(int i = 0; i < n; i++){
        if (s[i] == 'A') a++;
        if (s[i] == 'D') b++;
    }
    
    if (a > b) cout << "Anton" << endl;
    else if (a < b) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    
}