#include <bits/stdc++.h>

using namespace std;

int main(){

        int flag, x, y;
        for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                        cin >> flag;
                        if (flag == 1){
                                x = i, y = j;
                        }
                }
        }

        cout << sqrt(pow(x-2,2)) + sqrt(pow(y-2,2)) << endl;
}