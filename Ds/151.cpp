#include <bits/stdc++.h>

using namespace std;

int mv[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int main(){
    int H,W,answer=0;
    cin >> H >> W;
    vector<string> S(H);
    for(int i=0;i<H;i++){
        cin >> S[i];
    }

    for(int sy=0;sy<H;sy++){
        for(int sx=0;sx<W;sx++){
            if(S[sy][sx]=='#'){
                continue;
            }

            int ans[H][W] = {0};

            memset(ans,-1,sizeof(ans));

            ans[sy][sx] = 0;

            queue<pair<int,int>> Q;
            pair<int,int> P;
            P.first = sy;
            P.second = sx;
            Q.push(P);

            while(!Q.empty()){
                P = Q.front();
                Q.pop();
                for(int i=0;i<4;i++){
                    if(P.first+mv[i][0]<H && 0<=P.first+mv[i][0] && P.second+mv[i][1]<W && 0<=P.second+mv[i][1] && ans[P.first+mv[i][0]][P.second+mv[i][1]]==-1 && S[P.first+mv[i][0]][P.second+mv[i][1]]!='#'){
                        ans[P.first+mv[i][0]][P.second+mv[i][1]] = ans[P.first][P.second]+1;
                        Q.emplace(P.first+mv[i][0],P.second+mv[i][1]);
                    }
                }
            }

            for(int i=0;i<H;i++){
                for(int j=0;j<W;j++){
                    answer = max(answer,ans[i][j]);
                }
            }
        }
    }

    cout << answer << endl;
}