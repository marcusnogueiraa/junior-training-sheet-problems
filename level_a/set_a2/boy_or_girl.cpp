#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    vector<int> alpha(26);
    
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        int index = s[i] - 'a';
        
        if (!alpha[index]){
            res++;
            alpha[index] = true;
        }
    }
    
    if (res % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}