#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N,M,B,gy,gx,x,y;
    cin >> N >> M >> B;
    cin >> gy >> gx;

    vector<int> ry(M);
    vector<int> rx(M);
    vector<char> c(M);
    vector<int> by(B);
    vector<int> bx(B);


    for(int i=0;i<M;i++){
        cin >> ry[i] >> rx[i] >> c[i];
    }

    for(int i=0;i<B;i++){
        cin >> by[i] >> bx[i];
    }

    cout <<  N*N << endl;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int n=0;n<B;n++){
                if(i==gy){
                    cout << gy << " " << j << " ";
                    cout << 'L';
                    cout << endl;
                }else if(i==(by[n]+1)%N && j==bx[n]){
                    cout << i << " " << j << " ";
                    cout << 'L';
                    cout << endl;
                }else{
                    cout << i << " " << j << " ";
                    cout << 'U';
                    cout << endl;
                }
            }
        }
    }
}
