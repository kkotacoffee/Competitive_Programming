#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    bool flag = true;
    cin >> N;
    for(int i=9;0<i;i--){
        if(N%i == 0){
            N /= i;
            break;
        }
    }

    if(N<10 && 0<N && flag){
        cout << "Yes";
    }else{
        cout << "No";
    }
}