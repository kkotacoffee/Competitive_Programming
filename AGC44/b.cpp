#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<bool>> emp(N,vector<bool> (N,false));
    vector<pair<int,int>> vec;

    for(int i=0;i<N;i++){
        int P;
        cin >> P;
        int x = i%N;
        int y = i/N;

        ans = min(x,N-x)+min(y,N-y);

        for(int i=0;i<vec.size();i++){
            ans += min(ans,abs(vec[i].first-x)+abs(vec[i].second-y);
        }
        
        vec.push_back({x,y});
    }
}