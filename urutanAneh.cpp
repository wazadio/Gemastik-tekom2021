/*
contoh masukan

10
1 11 12 2 13 23 31 62 71 81

keluaran

1
11
31
71
81
2
12
62
13
23
*/

//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    short int N;
    cin >> N;

    short int X[N];
    for (short int i = 0; i<N; i++) cin >> X[i];
    
    for (short int i = 0; i<N; i++){
        for (short int j = i+1; j<N; j++){
            if (X[i]>X[j]){
                X[i] = X[i] + X[j];
                X[j] = X[i] - X[j];
                X[i] = X[i] - X[j];
            }
        }
    }
    
    for (short int i = 0; i<N; i++){
        for (short int j = i+1; j<N; j++){
            if (X[i]%10 <= X[j]%10){
                X[i] = X[i] + X[j];
                X[j] = X[i] - X[j];
                X[i] = X[i] - X[j];
            }
        }
    }
    
    for (short int i = N-1; i>=0; i--){
        cout<<X[i]<<endl;
    }

}