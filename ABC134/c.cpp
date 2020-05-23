#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    B=A;

    sort(B.begin(),B.end());
    int max = B[N-1];

    if(B[N-2]==B[N-1]){
        for(int i=0;i<N;i++){
            cout << B[N-1] << endl;
        }
    }else{

    for(int i=0;i<N;i++){
        if(A[i]==max){
            cout << B[N-2] << endl;
        }else{
        cout << max << endl;
    }
    }
    }
}