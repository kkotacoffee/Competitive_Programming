#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph(10000000);
int ans[10000000],one=4,two=2,three=3,N,len=1;

void dfs(int x){
    if(x==0){
        ans[x] = 1;
    }

        for(int i=0;i<graph[x].size();i++){
            if(ans[graph[x][i]]==0){
                if(len%3==0 && three<=N){
                    ans[graph[x][i]] = three;
                    three += 3;
                }else if(x%3==1 && one<=N){
                    ans[graph[x][i]] = one;
                    one += 3;
                }else if(x%3==2 && two<=N){
                    ans[graph[x][i]] = two;
                    two += 3;
                }else if(x%3==0 && three<=N){
                    ans[graph[x][i]] = three;
                    three += 3;
                }else{
                    if(one<=N){
                        ans[graph[x][i]] = one;
                        one += 3;
                    }else if(two<=N){
                        ans[graph[x][i]] = two;
                        two += 3;
                    }else{
                        ans[graph[x][i]] = three;
                        three += 3;
                    }
                }
                dfs(graph[x][i]);
            }
        }
    len++;
}

void getmukou(){
    int j,k;
    cin >> j >> k;
    j--;
    k--;
    graph[j].push_back(k); 
    graph[k].push_back(j);
}

int main(){
    cin >> N;
    for(int i=0;i<N-1;i++){
        getmukou();
    }

    dfs(0);

    for(int i=0;i<N;i++){
        cout << ans[i] << " ";
    }
}