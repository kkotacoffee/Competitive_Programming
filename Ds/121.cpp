#include <bits/stdc++.h>

using namespace std;

long long int powa[1000],powb[1000];

int main(){
    long long int A,B,las,ans=0;
    cin >> A >> B;
    for(int i=1;;i++){
        long long int div = pow(2,i);
        powa[i-1] = (div/2)*((A-1)/div) + max((long long int)0,(A-1)%div+1-div/2);
        powb[i-1] = (div/2)*(B/div) + max((long long int)0,B%div+1-div/2);
        if(B<pow(2,i)){
            las = i;
            break;
        }
    }

    for(int i=0;i<las;i++){
        if((powb[i]-powa[i])%2==1){
            ans += pow(2,i);
        }
        //cout << powa[i] << " " << powb[i] << endl;
    }

    cout << ans << endl;
}