#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N;
    cin >> N;
    vector<long long int> A(N-1),buka(N,0);

    for(int i=0;i<N-1;i++){
        cin >> A[i];
        buka[A[i]-1]++;
    }

    for(int i=0;i<N;i++){
        cout << buka[i] << endl;
    }
}