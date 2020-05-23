#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W,sharp=0;
    cin >> H >> W;
    vector<string> s(H);
    vector<vector<int>> len(H,vector<int>(W,-1));
    for(int i=0;i<H;i++){
        cin >> s[i];
    }

    len[0][0] = 0;

    queue<pair<int,int>> Q;
    pair<int,int> P;

    Q.push({0,0});

    while(!Q.empty()){
        P = Q.front();
        Q.pop();
        int y=P.first,x=P.second;
        if(y!=0 && len[y-1][x]==-1 && s[y-1][x]!='#'){
            len[y-1][x] = len[y][x]+1;
            Q.push({y-1,x});
        }

        if(y!=H-1 && len[y+1][x]==-1 && s[y+1][x]!='#'){
            len[y+1][x] = len[y][x]+1;
            Q.push({y+1,x});
        }

        if(x!=0 && len[y][x-1]==-1 && s[y][x-1]!='#'){
            len[y][x-1] = len[y][x]+1;
            Q.push({y,x-1});
        }

        if(x!=W-1 && len[y][x+1]==-1 && s[y][x+1]!='#'){
            len[y][x+1] = len[y][x]+1;
            Q.push({y,x+1});
        }
    }


    if(len[H-1][W-1]==-1){
        cout << -1 << endl;
    }else{
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(s[i][j]=='#'){
                    sharp++;
                }
            }
        }

        cout << H*W-sharp-len[H-1][W-1]-1 << endl;
    }
}