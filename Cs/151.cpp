#include <bits/stdc++.h>

using namespace std;

int ans=0;

int main(){
    int R,C,sy,sx,gy,gx;
    cin >> R >> C;
    vector<string> c(R);

    for(int i=0;i<R;i++){
        cin >> c[i];
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            for(int k=0;k<R;k++){
                for(int l=0;l<C;l++){
                    if(i!=k || j!=l){
                        sx=j+1;
                        sy=i+1;
                        gx=l+1;
                        gy=k+1;
                    int len[R][C];
                    int move[2] = {-1,1};
                    memset(len,-1,sizeof(len));
                    queue<pair<int,int>> Q;
                    pair<int,int> P;

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
                        ans = max(ans,len[gy-1][gx-1]);
                    }
                }
            }
        }
    }
    cout << ans << endl;
}