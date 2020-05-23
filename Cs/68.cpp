#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,x,y;
    bool ans = false;
    cin >> N >> M;
    vector<vector<int>> ab(N);
    for(int i=0;i<M;i++){
        cin >> x >> y;
        x--;
        y--;
        ab[x].push_back(y);
        ab[y].push_back(x);
    }

    for(int i=0;i<ab[0].size();i++){
        for(int j=0;j<ab[ab[0][i]].size();j++){
            if(ab[ab[0][i]][j] == N-1){
                ans = true;
            }
        }
    }

    if(ans){
        cout << "POSSIBLE" << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
}