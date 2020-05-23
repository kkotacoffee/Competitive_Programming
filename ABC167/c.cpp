#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,X,ans = 1e9;
    cin >> N >> M >> X;
    vector<long long int> C(N);
    vector<vector<long long int>> A(N,vector<long long int> (M));
    for(int i=0;i<N;i++){
        cin >> C[i];
        for(int j=0;j<M;j++){
            cin >> A[i][j];
        }
    }

    for(int i=0;i<pow(2,N+1);i++){

        vector<long long int> ok(N,0),skill(M,0);
        long long int tmp = 0;

        for(int j=0;j<N;j++){
            if(i>>j & 1 == 1){
                ok[j] = 1;
                tmp += C[j];
            }
        }


        for(int j=0;j<N;j++){
            if(ok[j]==1){
                for(int k=0;k<M;k++){
                    skill[k] += A[j][k];
                }
            }
        }


        for(int j=0;j<M;j++){
            if(skill[j]<X){
                break;
            }

            if(j==M-1){
                ans = min(ans,tmp);
            }
        }
    }

    if(ans==1e9){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
}