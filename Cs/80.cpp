#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N;
    long long int ans;
    cin >> N;
    int F[N][10],P[N][11];
    for(int i=0;i<N;i++){
        for(int j=0;j<10;j++){
            cin >> F[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<11;j++){
            cin >> P[i][j];
        }
    }

    for(int i=1;i<pow(2,10);i++){
        long long int now=0;
        vector<int> bit(10);
        for(int j=0;j<10;j++){
            bit[j] = (i>>j)&1;
        }

        for(int j=0;j<N;j++){
            int sum = 0;
            for(int k=0;k<10;k++){
                if(F[j][k] && bit[k]){
                    sum++;
                }
            }
            now += P[j][sum];
        }
        if(i==1){
            ans = now;
        }else{
            ans = max(ans,now);
        }
    }
    cout << ans << endl;
}