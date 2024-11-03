#include <bits/stdc++.h>
 
using namespace std; 
 
int main(){ 
        string s; 
        cin >> s; 
 
        int low = 0, up = 0; 
 
        for(char ch : s){ 
                if (ch >= 'a') low++; 
                else up++; 
        } 
 
        char c; 
 
        for(char ch : s){ 
                if (low >= up && ch <= 'Z'){ 
                        c = ch+32; 
                        cout << c; 
                } else if (up > low && ch >= 'a') { 
                        c = ch-32; 
                        cout << c;
                } else {
                        cout << ch;
                }
        }

        cout << endl;
}