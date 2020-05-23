#include <bits/stdc++.h>

using namespace std;

int main(){
    long ans,H,W;
    cin >> H >> W;
    int dp[H][W];
    vector<string> s(H);
    for(int i=0;i<H;i++){
        cin >> s[i];
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){

            if(i + j ==0){
                dp[i][j] = (s[i][j] == '#');
            }else{
                dp[i][j] = 1e9;
                if(0<i){
                    dp[i][j] = dp[i-1][j]+(s[i][j]=='#' && s[i-1][j]=='.');
                }

                if(0<j){
                    dp[i][j] = min(dp[i][j-1] + (s[i][j-1]=='.' && s[i][j] == '#'), dp[i][j]);
                }
            }
        }
    }

    cout << dp[H-1][W-1] << endl;
}