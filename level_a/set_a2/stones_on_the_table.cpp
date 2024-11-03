#include <iostream>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, tot = 0;
    string str;
    cin >> n;
    cin >> str;
    for (int i = 1; i < str.length(); i++){
        if (str.at(i-1) == str.at(i)) tot++;
    }

    cout << tot << endl;
}