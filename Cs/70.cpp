#include <bits/stdc++.h>

using namespace std;

unsigned long long gcd(unsigned long long  x, unsigned long long  y) {
  if (y == 0) return x;
  return gcd(y, x%y);
}

int main(){
  int N;
  unsigned long long T1,T2;
  cin >> N;
  vector<unsigned long long> T(N);
  for(int i=0;i<N;i++){
    cin >> T[i];
  }

  sort(T.begin(),T.end());

  T1 = T[0];
    
  for(int i=1;i<N;i++){
    T2 = T[i];
    T1 = T1*(T2/gcd(T1,T2));
  }

  cout << T1 << endl;
}