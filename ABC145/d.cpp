#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int X,Y,ans=0;
    cin >> X >> Y;
    for(int i=0;i<=X;i++){
        if((Y-2*i)*2 == X-i){
            cout << i;
            long long int add=1;
            for(int j=(Y-i);2<=j;j--){
                add *= j;
                add %= 1000000007;
                if(j<=i){
                    add /=j;
                }
                if(j<=(Y-2*i)){
                    add /= j;
                }
                add %= 1000000007;
            }
                //add %= 1000000007;
            
            //add %= 1000000007;

            /*for(int j=2;j<=i;j++){
                add /= j;
            }*/

            /*for(int j=2;j<=(Y-2*i);j++){
                add /= j;
            }*/
            add %= 1000000007;
            ans += add;
            ans %= 1000000007;
        }
    }

    cout << ans << endl;
}