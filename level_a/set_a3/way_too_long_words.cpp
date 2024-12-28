#include <iostream>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int number;
    cin >> number;
    string word;
    for (int i = 0; i < number; i++){
        cin >> word;
        int len = word.length();
        if (len > 10){
            cout << word.at(0) << len-2 << word.at(len-1) << endl; 
        } else {
            cout << word << endl;   
        }
    }
}