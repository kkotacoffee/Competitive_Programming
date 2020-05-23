#include <bits/stdc++.h>

using namespace std;

int main(){
    double N,M,sum=0;
    int ok=0;
    cin >> N >> M;
    vector<double> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
        sum += A[i];
    }

    for(int i=0;i<N;i++){
        if(sum/((double)4*M)<=A[i]){
            ok++;
        }
    }

    if(M<=ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}