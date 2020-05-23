#include <bits/stdc++.h>
 
using namespace std;

int gcd(int x, int y) {
  return y ? gcd(y, x%y) : x;
}

int main(){
    long long int N,K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    sort(A.begin(),A.end());

    long long int g = A[0];

    for(int i=1;i<N;i++){
        g = gcd(g,A[i]);
    }

    if(A[N-1] < K){
        cout << "IMPOSSIBLE" << endl;
    }else{
        for(int i=0;i<N;i++){
            if(A[i]==K){
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }

        if(K%g==0){
            cout << "POSSIBLE" << endl;
        }else{
            cout << "IMPOSSIBLE" << endl;
        }
    }
}