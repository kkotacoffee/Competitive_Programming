#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int K;
    cin >> K;
    if(K==0){
        cout << 2 << endl;
        cout << 1 << " " << 1 << endl;
    }else if(K==1){
        cout << 2 << endl;
        cout << 2 << " " << 0 << endl;
    }
    for(int i=50;1<=i;i--){
        if(K%i==0){
            cout << i << endl;
            for(int j=0;j<i;j++){
                if(j==0){
                    cout << i-1+K/i;
                }else{
                    cout << " " << i-1+K/i;
                }
            }
            cout << endl;
            return 0;
        }
    }
}