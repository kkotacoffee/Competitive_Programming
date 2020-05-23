#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,q;
    long long int answer=0;
    cin >> N >> M >> q;
    vector<long long int> a(q),b(q),c(q),d(q);
    vector<vector<int>> ans;

    for(int i=0;i<q;i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    queue<vector<int>> Q;

    for(int i=1;i<=M;i++){
        vector<int> vec(1,i);
        Q.push(vec);
    }

    while(!Q.empty()){
        vector<int> now = Q.front();
        Q.pop();
        if((int)now.size()==N){
            ans.push_back(now);
        }else{
            for(long long int i=now.back();i<=M;i++){
                vector<int> add(now);
                add.push_back(i);
                Q.push(add);
            }
        }
    }

    

    for(long long int i=0;i<(long long int)ans.size();i++){
        long long int anss = 0;

        for(int j=0;j<q;j++){
            if(ans[i][b[j]-1]-ans[i][a[j]-1]==c[j]){
                anss += d[j];
            }
        }

        answer = max(anss,answer);
    }

    cout << answer << endl;
}