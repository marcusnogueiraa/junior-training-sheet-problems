#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    
    int v1=0, v2=0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        
        if (num > x) v2++;
        else v1++;
    }
    
    
    cout << (v1) + (v2*2) << endl;
}