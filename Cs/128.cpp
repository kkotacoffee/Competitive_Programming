#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,count=0,ans=0;
    cin >> N >> M;
    vector<vector<int>> swt(N);
    vector<int> p(M);
    vector<int> sum(M,0);
    for(int i=0;i<M;i++){
        int k,s;
        cin >> k;
        for(int j=0;j<k;j++){
            cin >> s;
            swt[s-1].push_back(i);
        }
    }

    for(int i=0;i<M;i++){
        cin >> p[i];
    }

    while(count != pow(2,N)){
        int dmy = count;
        for(int i=0;i<N;i++){
            if(dmy&1){
                for(int j=0;j<swt[i].size();j++){
                    sum[swt[i][j]]++;
                }
            }
            dmy >>= 1;
        }
        
        for(int i=0;i<M;i++){
            if(sum[i]%2!=p[i]){
                ans--;
                break;
            }
        }
        ans++;
        count++;
        sum.clear();
        sum.resize(M);
    }

    cout << ans << endl;
}