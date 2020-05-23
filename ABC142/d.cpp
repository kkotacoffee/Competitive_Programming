#include <bits/stdc++.h>

using namespace std;
long long int ans = 1;
long long int las = 1;
vector<int> aaa;

long long int gcd(long long int x, long long int y) {
  if (y == 0) return x;
  return gcd(y, x%y);
}

long long int soin(long long int a){
    for(long long int i=2;i<pow(a,0.5)+1;i++){
        if(a%i == 0){
            aaa.push_back(i);
            if(i!=las){
                ans++;
                las=i;
                a /= i;
            }else{
                a /= i;
            }
            i=1;
        }
    }

    if(a != 1){
        ans++;
    }

    for(int i=0;i<aaa.size();i++){
        if(a == aaa[i]){
            ans--;
            break;
        }
    }
}

int main(){
    long long int A,B,C;
    cin >> A >> B;
    C = gcd(A,B);
    soin(C);
    cout << ans << endl;
}