#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> imos(N+1,0),ans;
    for(int i=0;i<M;i++){
        int s,t;
        cin >> s >> t;
        s--;
        t--;
        imos[s]++;
        imos[t+1]--;
    }


    for(int i=1;i<N;i++){
        imos[i] += imos[i-1];
    }

    for(int i=0;i<N;i++){
        if(imos)
    }
}