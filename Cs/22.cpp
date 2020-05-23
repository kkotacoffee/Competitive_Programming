#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,ans=1e9;
    cin >> N >> M;
    long long int d[N][N];
    vector<int> num;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                d[i][j] = 0;
            }else{
                d[i][j] = 1e9;
            }
        }
    }

    for(int i=0;i<M;i++){
        long long int a,b,t;
        cin >> a >> b >> t;
        a--;
        b--;
        d[a][b] = t;
        d[b][a] = t;

        if(a==0){
            num.push_back(b);
        }else if(b==0){
            num.push_back(a);
        }
    }

    for(int i=1;i<N;i++){
        for(int j=1;j<N;j++){
            for(int k=1;k<N;k++){
                d[j][k] = min(d[j][k],d[j][i]+d[i][k]);
            }
        }
    }

    for(int i=0;i<num.size();i++){
        for(int j=i+1;j<num.size();j++){
            ans = min(ans,d[num[i]][num[j]]+d[0][num[i]]+d[0][num[j]]);
        }
    }

    if(ans==1e9){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
}