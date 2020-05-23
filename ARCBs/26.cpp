#include <bits/stdc++.h>

using namespace std;



int main(){
    long long int N,sum=0;
    cin >> N;

    for(long long int i=2;i*i<=N;i++){
        if(N%i==0){
            if(i*i==N){
                sum += i;
            }else{
                sum += i;
                sum += N/i;
            }
        }
    }

    sum++;

    if(N==1){
        cout << "Deficient" << endl;
    }else if(N == sum){
        cout << "Perfect" << endl;
    }else if(N < sum){
        cout << "Abundant" << endl;
    }else{
        cout << "Deficient" << endl;
    }
}