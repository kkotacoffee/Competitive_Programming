#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i*j == 2025-N){
                cout << i << " x " << j << endl; 
            }
        }
    }
}