#include <bits/stdc++.h>

using namespace std;

int main(){
    int R,C,sx,sy;
    bool f = false;
    cin >> R >> C;
    int len[R][C];
    vector<string> c(R);
    int move[2] = {-1,1};
    memset(len,-1,sizeof(len));
    queue<pair<int,int>> Q;
    pair<int,int> P;

    for(int i=0;i<R;i++){
        cin >> c[i];
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(c[i][j]=='.'){
                sy = i;
                sx = j;
                f = true;
                break;
            }
        }
        if(f){
            break;
        }
    }

    P.first = sy;
    P.second = sx;

    Q.push(P);

    while(!Q.empty()){
        cout << 1;
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

    int mxx=0;

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(mxx<len[i][j]){
                P.first = i;
                P.second = j;
            }
        }
    }

    memset(len,-1,sizeof(len));
    len[P.first][P.second] = 0;

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

    mxx=0;

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(mxx<len[i][j]){
                mxx = len[i][j];
            }
        }
    }

    cout << mxx << endl;
}