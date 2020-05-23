#include <bits/stdc++.h>

using namespace std;

int N,M;
vector<vector <char>> field (100,vector<char>(100));

void dfs(int x,int y){
    field[x][y] = '.';
    for(int dx=-1;dx<=1;dx++){
        for(int dy=-1;dy<=1;dy++){
            int nx = x + dx, ny = y + dy;
            if(0 <= nx && nx <= N && 0 <= ny && ny < M && field[nx][ny] == 'W') dfs(nx,ny);
        }
    }
    return;
}

void solve(){
    int res = 0;
    for(int i = 0;i<N;i++){
        for(int j=0;j<M;j++){
            if(field[i][j]=='W'){
                dfs(i,j);
                res++;
            }
        }
    }
    cout << res;
}

int main(){
    cin >> N >> M;
    string line;
    for(int i=0;i<N;i++){
        cin >> line;
        for(int j=0;j<M;j++){
            field[i][j] = line[j];
        }
    }
    solve();
}