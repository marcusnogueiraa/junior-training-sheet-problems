#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int polices=0;
    int res=0;
    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        
        if (c == -1) {
            if (polices > 0) polices--;
            else res++;
        } else {
            polices += c;
        }
    }
    
    cout << res << endl;
}