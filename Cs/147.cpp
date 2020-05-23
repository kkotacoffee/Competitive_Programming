#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    cin >> N;
    vector<vector<pair<int,int>>> xy(N);
    for(int i=0;i<N;i++){
        int A,x,y;
        cin >> A;
        for(int j=0;j<A;j++){
            cin >> x >> y;
            x--;
            xy[i].emplace_back(x,y);
        }
    }

    for(int i=0;i<pow(2,N);i++){
        bool flag = true;
        for(int j=0;j<N;j++){
            if((i>>j) & 1){
                for(int k=0;k<xy[j].size();k++){
                    if(xy[j][k].second!=((i>>xy[j][k].first)&1)){
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag){
            int add=0;
            for(int j=0;j<N;j++){
                if((i>>j) & 1){
                    add++;
                }
            }
            ans = max(ans,add);
        }
    }
    cout << ans << endl;
}