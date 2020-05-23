#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,can=0,miss=0,ans=0,count=0;
    cin >> N;
    int A[N][N-1];

    for(int i=0;i<N;i++){
        for(int j=0;j<N-1;j++){
            cin >> A[i][j];
        }
    }

    for(int j=0;j<N-1;j++){
        for(int i=0;i<N;i++){
            if(i+1 == A[A[i][j]-1][j]){
                can++;
            }else{
                miss++;
            }
        }
        if(miss==0){
            ans++;
        }else if(miss==N){
            ans = -1;
            break;
        }else{
            ans++;
            count++;
            if(count%2==0){
                ans++;
            }
        }
        can =0;
        miss=0;
    }

    cout << ans << endl;
}