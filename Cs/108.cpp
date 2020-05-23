#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K;
    cin >> N >> K;
    long long int zero=0,ni=0;

    for(int i=1;i<=N;i++){
        if(i%K==K/2){
            ni++;
        }else if(i%K==0){
            zero++;
        }
    }

    if(K==1){
        cout << N*N*N << endl;
    }else if(K%2==0){
        cout << zero*zero*zero + ni*ni*ni << endl;
    }else{
        cout << zero*zero*zero << endl;
    }
    
}