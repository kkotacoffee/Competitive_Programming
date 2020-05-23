#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int X;
    cin >> X;

    for(long double i=-1000;i<=1000;i++){
        for(long double j=-1000;j<=1000;j++){
            if(i*i*i*i*i+j*j*j*j*j==X){
                cout << i << " " << -j << endl;
                return 0;
            }else if(i*i*i*i*i-j*j*j*j*j==X){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}