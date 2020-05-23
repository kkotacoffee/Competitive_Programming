#include <bits/stdc++.h>

using namespace std;

int mv[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int main(){
    vector<string> A(10),cp;
    for(int i=0;i<10;i++){
        cin >> A[i];
    }

    cp = A;

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){

            A = cp;
            bool can = true;

            if(A[i][j] == 'o'){
                continue;
            }

            queue<pair<int,int>> Q;
            pair<int,int> P;
            P.first = i;
            P.second = j;
            Q.push(P);


            while(!Q.empty()){
                P = Q.front();
                Q.pop();
                for(int i=0;i<4;i++){
                    if(0<=P.first+mv[i][0] && P.first+mv[i][0]<10 && 0<=P.second+mv[i][1] && P.second+mv[i][1]<10 && A[P.first+mv[i][0]][P.second+mv[i][1]]=='o'){
                        A[P.first+mv[i][0]][P.second+mv[i][1]] = 'x';
                        Q.push({P.first+mv[i][0],P.second+mv[i][1]});
                    }
                }
            }

            for(int k=0;k<10;k++){
                for(int l=0;l<10;l++){
                    if(A[k][l]=='o'){
                        can = false;
                        break;
                    }
                }
            }
            if(can){
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

}