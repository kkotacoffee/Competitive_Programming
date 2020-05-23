#include <bits/stdc++.h>

using namespace std;

long long int dp[101][105][2];

int main(){
    int N;
    cin >> N;

    dp[2][0][0] = 2;
    dp[2][0][1] = 1;
    dp[2][1][0] = 0;
    dp[2][1][1] = 1;

    for(int i=3;i<101;i++){
        for(int j=0;j<=i;j++){
            dp[i][j][0] += dp[i-1][j][1]+dp[i-1][j][0];
            dp[i][j][1] += dp[i-1][j][0];
            dp[i][j+1][1]  += dp[i-1][j][1];
        }
    }

    for(int i=0;i<N;i++){
        int num,x,y;
        cin >> num >> x >> y;
        //cout << dp[x][y][0] << dp[x][y][1] << endl;
        cout << num << " " << dp[x][y][0] + dp[x][y][1] << endl;
    }
}