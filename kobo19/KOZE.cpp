#include <bits/stdc++.h>

using namespace std;

bool flag = false;
int N,M,sheep=0,wolves=0,s=0,v=0;
vector<string> vec(250);

void dfs(int a,int b){
    vec[a][b] = '#';

    for(int i=-1;i<2;i++){

        if(0<=a+i && a+i<N && vec[a+i][b] != '#'){
            if(a+i==0 || a+i== N-1 || b==0 || b == M-1){
                flag = true;
            }
            if(vec[a+i][b] == 'k'){
                s++;
            }else if(vec[a+i][b] == 'v'){
                v++;
            }
            dfs(a+i,b);
        }

        if(0<=b+i && b+i<M && vec[a][b+i] != '#'){
            if(a==0 || a== N-1 || b+i==0 || b+i == M-1){
                flag = true;
            }
            if(vec[a][b+i] == 'k'){
                s++;
            }else if(vec[a][b+i] == 'v'){
                v++;
            }
            dfs(a,b+i);
        }
    }
}

int main(){
    cin >> N >> M;
    vec.resize(N);

    for(int i=0;i<N;i++){
        cin >> vec[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(vec[i][j]!='#'){
                if(vec[i][j] == 'k'){
                    s++;
                }else if(vec[i][j] == 'v'){
                    v++;
                }
                dfs(i,j);
                if(flag){
                    sheep += s;
                    wolves += v;
                }else if(v<s){
                    sheep += s;
                }else{
                    wolves += v;
                }
                s=0;
                v = 0;
                flag = false;
            }
        }
    }

    cout << sheep << " " << wolves;
}