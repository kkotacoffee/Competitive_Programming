#include <iostream>
#include <vector>
#include <queue>

using namespace std;

queue<int> Q;
vector<vector<int>> vec(10000);
vector<int> choten;
vector<int> kyori(10000,-1);
vector<int> reset(10000,-1);
int ans=0;

void bfs(){
    while(!Q.empty()){
        int f = Q.front();
        for(int i=0;i<vec[f].size();i++){
            if(kyori[vec[f][i]] == -1){
                kyori[vec[f][i]] = kyori[f]+1;
                ans = max(ans,kyori[f]+1);
                Q.push(vec[f][i]);
            }
        }
        Q.pop();
    }
}

int main(){
    int N;
    cin >> N;
    vector<int> count(N,0);

    for(int i=1;i<N;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for(int i=0;i<N;i++){
        if(vec[i].size()==1){
            choten.push_back(i);
        }
    }

    for(int i=0;i<choten.size();i++){
        kyori[choten[i]] = 0;
        Q.push(choten[i]);
        bfs();
        kyori = reset;
    }

    cout << ans << endl;
}