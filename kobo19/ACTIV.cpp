#include <bits/stdc++.h>

using namespace std;

int main(){

    while(1){
        int N;
        cin >> N;
        vector<pair<long long int,long long int>> C(N);
        long long int dp[N];
        for(int i=0;i<N;i++){
            cin >> C[i].second >> C[i].first;
        }

        sort(C.begin(),C.end());

        dp[0] = 1;

        for(int i=0;i<N;i++){
            
        }

        cout << setfill('0') << right << setw(8) << (dp[N-1][0]+dp[N-1][1]-1)%1000000000 << endl;
    }
}