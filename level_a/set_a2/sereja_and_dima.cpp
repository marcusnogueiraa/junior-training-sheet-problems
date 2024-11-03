#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N, jog1 = 0, jog2 = 0, point1 = 0;
    cin >> N;
    int point2 = N-1;
    int vet[N];
    for (int i = 0; i < N; i++){
        cin >> vet[i];
    }
 
    while (point1 < point2){
        if (vet[point1] > vet[point2]){
            jog1+= vet[point1];
            point1++;
        }else{
            jog1+=vet[point2];
            point2--;
        }
        if (vet[point1] >= vet[point2]){
            jog2+= vet[point1];
            point1++;
        }else{
            jog2+=vet[point2];
            point2--;
        }
    }
 
    if (point1 == point2) jog1 += vet[point1];
 
    cout << jog1 << " " << jog2 << endl;
}