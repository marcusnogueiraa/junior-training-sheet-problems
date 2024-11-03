#include <iostream>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, a, b, c, tot = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if (a+b+c >= 2) tot++;
    }
    cout << tot << endl;
}