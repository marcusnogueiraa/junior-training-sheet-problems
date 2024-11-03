#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string ant="00", curr;
    int res = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> curr;
        if (curr != ant)
            res++;
            
        ant = curr;
    }
    
    cout << res << endl;
    
}