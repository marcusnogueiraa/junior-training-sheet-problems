#include <bits/stdc++.h>

using namespace std;

char norm(char c){
    if ('A'<= c && c <= 'Z'){
        return c + 32;
    }
    
    return c;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    
    for(int i = 0; i < s1.size(); i++){
        char a = norm(s1[i]);
        char b = norm(s2[i]);
        
        if (a < b){
            cout << -1 << endl;
            return 0;
        } 
        
        if (a > b){
            cout << 1 << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
}