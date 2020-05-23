#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,A,ans=0,M=0,W=0;
    cin >> N >> A;
    long long int sum[N][N][2501];
    vector<int> x(N);
    
    for(int i=0;i<N;i++){
        cin >> x[i];
    }

    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            for(int n=0;n<=2500;n++){
                sum[i][j][n] = 0;
            }
        }
    }

    sum[0][0][0]=1;
}