#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<string> a(N);
    int ans[N][M];

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            ans[i][j] = 0;
        }
    }

    for(int i=0;i<N;i++){
        cin >> a[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(a[i][j]!='0'){
                ans[i+1][j] += a[i][j]-'0';
                a[i+2][j] -= a[i][j]-'0';
                a[i+1][j-1] -= a[i][j]-'0';
                a[i+1][j+1] -= a[i][j]-'0';
            }
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
}