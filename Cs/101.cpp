#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,one;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
        if(A[i]==1){
            one=i;
        }
    }

    if(N==K){
        cout << "1" << endl;
    }else if(one%(K-1)==0 && (N-one-1)%(K-1)==0){
        cout << one/(K-1) + (N-one-1)/(K-1) << endl;  
    }else if(one%(K-1)==0 || (N-one-1)%(K-1)==0){
        cout << one/(K-1) + (N-one-1)/(K-1) + 1 << endl;
    }else if(one%(K-1) + (N-one-1)%(K-1) <= K-1){
        cout << one/(K-1) + (N-one-1)/(K-1) + 1 << endl;
    }else{
        cout << one/(K-1) + (N-one-1)/(K-1) + 2 << endl;
    }

}