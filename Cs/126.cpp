#include <bits/stdc++.h>

using namespace std;

int main(){
    double N,K,ans=0;
    cin >> N >> K;

    for(int i=1;i<N+1;i++){
        double count=0,num=i;
        while(num<K){
            num*=2;
            count++;
        }
        ans += 1.0/pow(2,count)/N;
    }

    cout << setprecision(14) << ans << endl;
}