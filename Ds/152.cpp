#include <bits/stdc++.h>

using namespace std;

long long int sum[10][10];

int main(){
    long long int N,ans=0;
    cin >> N;
    for(int i=1;i<=N;i++){
        string S = to_string(i);
        sum[S[0]-'0'][S.back()-'0']++;
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            ans += sum[i][j]*sum[j][i];
        }
    }

    cout << ans << endl;
}