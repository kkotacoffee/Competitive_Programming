#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){

        int x,N;
        bool flag = true;
        cin >> x >> N;

        vector<vector<int>> graph(x);
        vector<int> color(x,0);

        for(int j=0;j<N;j++){
            int a,b;
            cin >> a >> b;
            a--;
            b--;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        for(int j=0;j<x;j++){
            if(color[j] == 0){
                color[j] = 1;
                for(int c=0;c<graph[j].size();c++){
                    color[graph[j][c]] = -1;
                }
            }else if(color[j] == 1){
                for(int c=0;c<graph[j].size();c++){
                    if(color[graph[j][c]] == 1){
                        flag = false;
                    }else if(color[graph[j][c]] == 0){
                        color[graph[j][c]] = -1;
                    }
                }
            }else{
                for(int c=0;c<graph[j].size();c++){
                    if(color[graph[j][c]] == -1){
                        flag = false;
                    }else if(color[graph[j][c]] == 0){
                        color[graph[j][c]] = 1;
                    }
                }
            }
        }

        cout << "Scenario #" << i+1  << ":" << endl;

        if(flag){
            cout << "No suspicious bugs found!" << endl;
        }else{
            cout << "Suspicious bugs found!" << endl;
        }

    }
}