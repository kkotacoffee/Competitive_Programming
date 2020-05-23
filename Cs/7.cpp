#include <bits/stdc++.h>

using namespace std;

int main(){
    int R,C,sy,sx,gy,gx;
    cin >> R >> C >> sy >> sx >> gy >> gx;
    vector<string> c(R);
    int len[R][C];
    int move[2] = {-1,1};
    memset(len,-1,sizeof(len));
    queue<pair<int,int>> Q;
    pair<int,int> P;

    for(int i=0;i<R;i++){
        cin >> c[i];
    }

    P.first = sy-1;
    P.second = sx-1;
    len[sy-1][sx-1]=0;

    Q.push(P);

    while(!Q.empty()){
        P = Q.front();
        Q.pop();
        for(int i=0;i<2;i++){
            if(c[P.first+move[i]][P.second]=='.' && 0<=P.first+move[i] && P.first+move[i]<R){
                c[P.first+move[i]][P.second] = '#';
                len[P.first+move[i]][P.second] = len[P.first][P.second]+1;
                P.first += move[i];
                Q.push(P);
                P.first -= move[i];
            }
            if(c[P.first][P.second+move[i]]=='.' && 0<=P.second+move[i] && P.second+move[i]<C){
                c[P.first][P.second+move[i]] = '#';
                len[P.first][P.second+move[i]] = len[P.first][P.second]+1;
                P.second += move[i];
                Q.push(P);
                P.second -= move[i];
            }
        }
    }

    cout << len[gy-1][gx-1] << endl;
}