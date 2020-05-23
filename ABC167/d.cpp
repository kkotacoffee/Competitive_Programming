#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,now=0,twice;
    cin >> N >> K;
    vector<long long int> A(N),color(N,-1),visited,roop;

    for(int i=0;i<N;i++){
        cin >> A[i];
        A[i]--;
    }

    visited.push_back(0);
    color[0] = 0;

    for(int i=1;;i++){
        now = A[now];

        if(K==i){
            cout << now+1 << endl;
            return 0;
        }
        
        if(color[now]==0){
            twice = now;
            break;
        }else{
            color[now] = 0;
            visited.push_back(now);
        }
    }

    for(int i=0;i<visited.size();i++){
        if(visited[i]==twice){
            K -= i;
            for(int j=i;j<visited.size();j++){
                roop.push_back(visited[j]);
            }
            break;
        }
    }

    long long int size = roop.size();

    cout << roop[K%size]+1 << endl;
}