#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<long long int> P(M),Y(M);
    vector<vector<long long int>> ken(N+1);

    for(int i=0;i<M;i++){
        cin >> P[i] >> Y[i];
        ken[P[i]].push_back(Y[i]);
    }

    for(int i=0;i<=N;i++){
        sort(ken[i].begin(),ken[i].end());
    }

    for(int i=0;i<M;i++){
        int result = lower_bound(ken[P[i]].begin(),ken[P[i]].end(),Y[i]) - ken[P[i]].begin();
        cout << setfill('0') << right << setw(6) << P[i];
        cout << setfill('0') << right << setw(6) << result+1 << endl;
    }
}