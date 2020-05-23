#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int H,N,sum=0;
    cin >> H >> N;
    vector<long long int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
        sum += A[i];
    }

    if(H<=sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


}