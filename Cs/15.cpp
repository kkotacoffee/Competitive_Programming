#include <bits/stdc++.h>

using namespace std;

bool flag = true;
int N,K,T[5][5];


int dfs(int x, int count){
    if(count==N){
        if(x==0){
            flag = false;
        }
    }else{
        for(int i=0;i<K;i++){
            dfs(x^T[count][i], count+1);
        }
    }
    return 0;
}

int main(){
    cin >> N >> K;
    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            cin >> T[i][j]; 
        }
    }

    dfs(0,0);

    if(flag){
        cout << "Nothing" << endl;
    }else{
        cout << "Found" << endl;
    }
}

