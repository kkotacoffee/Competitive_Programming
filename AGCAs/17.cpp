#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,P,A,even=1,odd=0,add=0,addodd=0,addeven=1;
    cin >> N >> P;
    for(int i=0;i<N;i++){
        cin >> A;
        if(A%2==0){
            even *= 2;
        }else{
            odd++;
        }
    }

    add = odd;

    addodd += odd;

    for(int i=2;i<=odd;i++){
        add = (odd-i+1)*add/i;
        if(i%2==0){
            addeven += add;
        }else{
            addodd += add;
        }
    }

    if(P==0){
        cout << even*addeven << endl;
    }else{
        cout << even*addodd << endl;
    }
}