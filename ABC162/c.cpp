#include <bits/stdc++.h>

using namespace std;

long long int gcddd(long long int x, long long int y) {
  if (y == 0) return x;
  return gcddd(y, x%y);
}

int main(){
    int K;
    long long int ans = 0,now;
    cin >> K;
    for(int i=1;i<=K;i++){
        for(int j=1;j<=K;j++){
            for(int k=1;k<=K;k++){
                now = gcddd(i,j);
                ans += gcddd(now,k);
            }
        }
    }

    cout << ans << endl;
}