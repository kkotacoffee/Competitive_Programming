#include <bits/stdc++.h>

using namespace std;

int mv[4][2] = {{0,-1},{0,1},{-1,0},{1,0}};

int main(){
    int H,W,answer=0;
    cin >> H >> W;
    vector<string> A(H);
    queue <pair<int,int>> Q;
    pair<int,int> P;
    int ans[H][W];
    memset(ans,-1,sizeof(ans));
    for(int i=0;i<H;i++){
        cin >> A[i];
    }

    for(int y=0;y<H;y++){
        for(int x=0;x<W;x++){
            if(A[y][x]=='#'){
                ans[y][x] = 0;
                Q.push({y,x});
            }
        }
    }

    while(!Q.empty()){
        P = Q.front();
        Q.pop();
        for(int i=0;i<4;i++){
            if(0<=P.first+mv[i][0] && P.first+mv[i][0]<H && 0<=P.second+mv[i][1] && P.second+mv[i][1]<W && ans[P.first+mv[i][0]][P.second+mv[i][1]]==-1){
                ans[P.first+mv[i][0]][P.second+mv[i][1]] = ans[P.first][P.second]+1;
                Q.push({P.first+mv[i][0],P.second+mv[i][1]});
            }
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            answer = max(answer,ans[i][j]);
        }
    }

    cout << answer << endl;
}