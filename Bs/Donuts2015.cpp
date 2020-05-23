#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,ans = 0;
    cin >> N >> M;
    vector<long long int> A(N),B(M);
    vector<vector<long long int>> I,groups;

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<M;i++){
        int C;
        cin >> B[i];
        cin >> C;
        vector<long long int> add(C);
        for(int j=0;j<C;j++){
            cin >> add[j];
            add[j]--;
        }
        sort(add.begin(),add.end());
        I.push_back(add);
    }

    queue<vector<long long int>> Q;

    for(int i=0;i<=N-9;i++){
        vector<long long int> add(1,i);
        Q.push(add);
    }

    while(!Q.empty()){
        vector<long long int> now = Q.front();
        Q.pop();
        if(now.size()==9){
            groups.push_back(now);
        }else{
            for(int i=now.back()+1;i<=N-9+now.size();i++){
                vector<long long int> add = now;
                add.push_back(i);
                Q.push(add);
            }
        }
    }

    for(int i=0;i<groups.size();i++){
        long long int anss = 0;
        for(int j=0;j<9;j++){
            anss += A[groups[i][j]];
        }

        for(int j=0;j<M;j++){
            int ok = 0;
            for(int k=0;k<I[j].size();k++){
                auto itr = find(groups[i].begin(),groups[i].end(),I[j][k]);
                if(itr != groups[i].end()){
                    ok++;
                }
            }
            if(3<=ok){
                anss += B[j];
            }
        }
        ans = max(anss,ans);
    }

    cout << ans << endl;
}