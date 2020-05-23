#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int sum=0,N,b;
    int n=0;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
        A[i] -= (i+1);
    }

    sort(A.begin(),A.end());

    if(N%2==1){
        b = A[N/2];
    }else{
        b = A[N/2] + A[N/2 -1];
        b /= 2;
    }

    for(int i=0;i<N;i++){
        sum += abs(A[i]-b);
    }

    cout << sum << endl;
}