#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N,M,B,gy,gx,x,y,count=0,f=0;
    queue<pair<int,int>> q;
    pair<int,int> p;
    cin >> N >> M >> B;
    cin >> gy >> gx;

    int mp[N][N];
    vector<int> ry(M);
    vector<int> rx(M);
    vector<char> c(M);
    vector<int> by(B);
    vector<int> bx(B);

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            mp[i][j] = 0;
        }
    }

    mp[gy][gx] = -1;

    for(int i=0;i<M;i++){
        cin >> ry[i] >> rx[i] >> c[i];
    }

    for(int i=0;i<B;i++){
        cin >> by[i] >> bx[i];
        mp[by[i]][bx[i]] = -1;
    }

    p.first = gy;
    p.second = gx;

    if(mp[(p.first+1)%N][p.second] == 0){
            mp[(N+p.first+1)%N][p.second] = 1;
            q.emplace((p.first+1)%N,p.second);
    }

        if(mp[(N+p.first-1)%N][p.second] == 0){
            mp[(N+p.first-1)%N][p.second] = 2;
            q.emplace((N+p.first-1)%N,p.second);
        }

        if(mp[p.first][(N+p.second+1)%N] == 0){
            mp[p.first][(N+p.second+1)%N] = 3;
            q.emplace(p.first,(N+p.second+1)%N);
        }

        if(mp[p.first][(N+p.second-1)%N] == 0){
            mp[p.first][(N+p.second-1)%N] = 4;
            q.emplace(p.first,(N+p.second-1)%N);
        }


    while(! q.empty()){
        p = q.front();
        count++;
        q.pop();
        if(mp[(N+p.first+1)%N][p.second] == 0){
            mp[(N+p.first+1)%N][p.second] = 1;
            q.emplace((N+p.first+1)%N,p.second);
            if(mp[(N+p.first+1)%N][p.second] == mp[p.first][p.second]){
                f=1;
            }
        }

        if(mp[(N+p.first-1)%N][p.second] == 0){
            mp[(N+p.first-1)%N][p.second] = 2;
            q.emplace((N+p.first-1)%N,p.second);
            if(mp[(N+p.first-1)%N][p.second] == mp[p.first][p.second]){
                if(f!=0){
                    f=5;
                }else{
                    f=1;
                }
            }
        }

        if(mp[p.first][(N+p.second+1)%N] == 0){
            mp[p.first][(N+p.second+1)%N] = 3;
            q.emplace(p.first,(N+p.second+1)%N);
            if(mp[p.first][(N+p.second+1)%N] == mp[p.first][p.second]){
                if(f!=0){
                    f=5;
                }else{
                    f=1;
                }
            }
        }

        if(mp[p.first][(N+p.second-1)%N] == 0){
            mp[p.first][(N+p.second-1)%N] = 4;
            q.emplace(p.first,(N+p.second-1)%N);
            if(mp[p.first][(N+p.second-1)%N] == mp[p.first][p.second]){
                if(f!=0){
                    f=5;
                }else{
                    f=1;
                }
            }
        }

        if(f<5){
            f=0;
            mp[p.first][p.second]=-1;
            count--;
        }
    }

    cout << count << endl;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(mp[i][j]!=-1){
                if(mp[i][j]==1){
                    cout << i << " " << j << " ";
                    cout << 'U' << endl;
                }else if(mp[i][j]==2){
                    cout << i << " " << j << " ";
                    cout << 'D' << endl;
                }else if(mp[i][j]==3){
                    cout << i << " " << j << " ";
                    cout << 'L' << endl;
                }else if(mp[i][j]==4){
                    cout << i << " " << j << " ";
                    cout << 'R' << endl;
                }
            }
        }
    }
}
