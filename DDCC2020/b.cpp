#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,sum=0,hanbun=0,aa=0;
    cin >> N;
    vector<long long int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
        sum += A[i];
    }

    for(int i=0;i<N;i++){
        hanbun += A[i];
        if(sum/2<=hanbun){
            aa = hanbun-A[i];
            break;
        }
    }

    cout << min(abs(sum-hanbun-hanbun),abs(sum-aa-aa)) << endl;
}