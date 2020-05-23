#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int H,W,ans=0;
    cin >> H >> W;
    long long int d[10][10];

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> d[i][j];
        }
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                d[j][k] = min(d[j][k],d[j][i]+d[i][k]);
            }
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            int A;
            cin >> A;
            if(A!=-1){
                ans += d[A][1];
            }
        }
    }

    cout << ans << endl;
}