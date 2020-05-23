#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,D,com=0,ans=0;
    cin >> N >> D;
    int X[N][D];
    for(int i=0;i<N;i++){
        for(int j=0;j<D;j++){
            cin >> X[i][j];
        }
    }

    for(int i=0;i<(N-1);i++){
        for(int j=i+1;j<N;j++){
            for(int n=0;n<D;n++){
                com += (X[i][n]-X[j][n])*(X[i][n]-X[j][n]);
            }
            int a = (int)sqrt((double)com);
            if (a*a == com){
                ans++;
            }
            com = 0; 
        }
    }

    cout << ans << endl;
}