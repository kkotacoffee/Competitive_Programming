#include <bits/stdc++.h>

using namespace std;

const int INF = 100000000;
typedef pair<int,int> P;

int N,M;
int sx,sy;
int gx,gy;
vector<vector <char>> maze (100,vector<char>(100));
vector<vector <int>> d(100,vector<int>(100));

int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

int bfs(){
    queue<P> que;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            d[i][j]=INF;
        }
    }
    que.push(P(sx,sy));
    d[sx][sy] =0;

while(que.size()){
    P p = que.front();
    que.pop();
    if(p.first == gx && p.second == gy) break;

    for(int i=0;i<4;i++){
        int nx = p.first + dx[i], ny = p.second + dy[i];
        if(0<=nx && nx<N && 0<=ny && ny<M && maze[nx][ny] != '#' && d[nx][ny] == INF){
            que.push(P(nx,ny));
            d[nx][ny] = d[p.first][p.second]+1;
        }
    }
}
return d[gx][gy];
}

void solve(){
    int res = bfs();
    cout << res;
}

int main(){
    cin >> N >> M;
    string line;
    for(int i=0;i<N;i++){
        cin >> line;
        for(int j=0;j<M;j++){
            maze[i][j] = line[j];
            if(maze[i][j]=='S'){
                sx=i;
                sy=j;
            }else if(maze[i][j]=='G'){
                gx=i;
                gy=j;
            }
        }
    }
    solve();
}