#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long int x, long long int y) {
  if (y == 0) return x;
  return gcd(y, x%y);
}

int main(){
    long long int N,div;
    cin >> N;
    vector<long long int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    sort(A.begin(),A.end());

    div = A[N-1];

    for(int i=N-2;0<=i;i--){
        div = gcd(div,A[i]);
    }

    cout << div << endl;
}