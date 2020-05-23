#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N,M,B,gy,gx,x,y,count;
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
        cin >> y >> x;
        mp[y][x] = -1;
        if(mp[(y+1)%N][(x+1)%N]==0){
            mp[(y+1)%N][(x+1)%N] = 
        }
    }

    cout << 2*(N-1) +1 << endl;

    for(int i=0;i<N;i++){
        cout << gy << " " << i << " ";
        cout << 'L';
        cout << endl;
    }

    for(int i=0;i<N;i++){
        if(i!=gy){
            cout << i << " " << gx << " ";
            cout << 'U';
            cout << endl;
        }
    }
}
