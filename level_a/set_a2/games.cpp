#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<int, int> mpc, mpv;
    int res = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        
        cin >> a;
        mpc[a]++;
        res += mpv[a];

        cin >> b;
        mpv[b]++;
        res += mpc[b];
    }

    cout << res << endl;
}