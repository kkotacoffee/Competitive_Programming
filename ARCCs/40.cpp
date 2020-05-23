#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    vector<string> S(N);

    for(int i=0;i<N;i++){
        cin >> S[i];
    }

    for(int i=0;i<N-1;i++){
        for(int j=0;j<N;j++){
            if(S[i][j]=='.'){
                for(int k=j;k<N;j++){
                    if(S[i][k]=='o'){
                        break;
                    }
                }
            }
        }
    }
}