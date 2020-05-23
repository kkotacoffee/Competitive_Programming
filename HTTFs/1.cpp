#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N,M,B,gy,gx,x,y,count=0;
    cin >> N >> M >> B;
    cin >> gy >> gx;

    vector<int> ry(M);
    vector<int> rx(M);
    vector<char> c(M);
    vector<int> by(B);
    vector<int> bx(B);
    int mp[N][N];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            mp[i][j] = 0;
        }
    }

    for(int i=0;i<M;i++){
        cin >> ry[i] >> rx[i] >> c[i];
    }

    for(int i=0;i<B;i++){
        cin >> by[i] >> bx[i];
        mp[by[i]][bx[i]] = -1;
    }

    mp[gy][gx] = -1;

    for(int i=1;i<N;i++){
        if(mp[gy][(gx+i)%N] != -1){
            mp[gy][(gx+i)%N] = 3;
            count++;
        }
    }

    for(int i=0;i<B;i++){
        if(mp[(by[i]+1)%N][bx[i]] == 0){
            mp[(by[i]+1)%N][bx[i]] = 1;
            count++;
        }

        if(mp[(by[i]+1)%N][(bx[i]+1)%N] == 0){
            mp[(by[i]+1)%N][(bx[i]+1)%N] = 2;
            count++;
        }
    }

    for(int i=0;i<B;i++){
        if(mp[by[i]][(bx[i]-1)%N] == 0){
            mp[by[i]][(bx[i]-1)%N] = 2;
            count++;
        }

        if(mp[by[i]][(bx[i]+1)%N] == 0){
            mp[by[i]][(bx[i]+1)%N] = 2;
            count++;
        }
    }

    cout << count << endl;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(mp[i][j]==1){
                cout << i << " " << j << " ";
                cout << 'R' << endl;
            }else if(mp[i][j]==2){
                cout << i << " " << j << " ";
                cout << 'U' << endl;
            }else if(mp[i][j]==3){
                if(mp[gy][(gx+1)%N] != -1){
                    cout << i << " " << j << " ";
                    cout << 'L' << endl;
                }else{
                    cout << i << " " << j << " ";
                    cout << 'R' << endl;
                }
            }
        }
    }
}