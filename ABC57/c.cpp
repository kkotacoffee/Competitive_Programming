#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  long long int N;
  long long int a,b,n=10;
  cin >> N;
  long w = sqrt(N);
  for(long i=1;i<=w;i++){
    if(N%i==0){
      a=i;
      b=N/i;
    }
  }
  for(long i=1;;i++){
    if(a%n==a){
      a=i;
      break;
    }
    n *=10;
  }
  n=10;
  for(long i=1;;i++){
    if(b%n==b){
      b=i;
      break;
    }
    n *=10;
  }
  cout << max(a,b);
}