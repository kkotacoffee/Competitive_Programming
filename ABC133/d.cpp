#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int>A(N,0);
    vector<int>B(N,0);

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    if(A[0]%2==0){
        B[0] += A[0]/2;
        B[1] += A[0]/2;
    }else if(A[0]<A[N-1]){
        B[0] += A[0]/2;
        B[1] += A[0]/2 +1;
    }else{
        B[1] += A[0]/2;
        B[0] += A[0]/2 +1;
    }

    for(int i=1;i<N;i++){
        int r = A[i]-B[i];
        B[i] = B[i]*2;
        B[i+1] += r;
    }
    
    for(int i=0;i<N;i++){
            if(i==N-1){
                cout << B[i] << endl;
            }else{
            cout << B[i] << " ";
            }
    }
}