#include <bits/stdc++.h>

using namespace std;

int main(){
    int R,C,D,ans=0;
    cin >> R >> C >> D;
    int A[R][C];

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> A[i][j];
        }
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(i+j<=D && (i+j)%2==D%2){
                ans = max(ans,A[i][j]);
            }
        }
    }

    cout << ans << endl;
}