#include <bits/stdc++.h>

using namespace std;

int dist(char current, char ch){
    int icurrent = current - 'a' + 1;
    int ich = ch - 'a' + 1;
    if (abs(icurrent-ich) > 13){
        if (ich > icurrent) return (26-ich) + icurrent;
        else return (26-icurrent) + ich;
    } else {
        return abs(icurrent-ich);
    }
}

int main(){
    string s;
    cin >> s;

    int tot = 0;
    char current = 'a';
    for(char ch : s) {
        tot += dist(current, ch);
        current = ch;
    }   

    cout << tot << endl;
}