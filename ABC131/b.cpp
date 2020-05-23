#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,L,sum=0,max=200,n;
    cin >> N >> L;
      for(int i=0;i<N;i++){
        if(abs(i+L)<max){
            n=i;
            max = abs(i+L);
        }
        }
    for(int i=0;i<N;i++){
        if(i==n){
        }else{
        sum += (L+i);
    }
    }
    cout << sum;
    return 0;
}

  if(C/D==0){
        s -= C/D; 
    }else if(D/C==0){
        s -= D/C;
    }else{
        s++;
    }