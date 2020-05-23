#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    vector<string> T(N);
    vector<long long int> dp(S.size()+1,0);
    dp[0] = 1;

    for(int i=0;i<N;i++){
        cin >> T[i];
    }

    for(int i=1;i<=S.size();i++){
        for(int j=0;j<N;j++){
            if(T[j].size()<=i){
                if(S.substr(i-T[j].size(),T[j].size()) == T[j]){
                    dp[i] += dp[i-T[j].size()];
                    dp[i] %= 1000000007;
                }
            }
        }
    }

    cout << dp[S.size()]%1000000007 << endl;
}