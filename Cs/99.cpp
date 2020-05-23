#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,s=6,n=9,ans=0,cho,sum=100000;
    cin >> N;
    vector<int> bank(1),dp(N+1,1000000);
    bank[0] =  1;
    while(s<=N){
        bank.push_back(s);
        s*=6; 
    }

    while(n<=N){
        bank.push_back(n);
        n*=9; 
    }

    sort(bank.begin(),bank.end());
    dp[0] = 0;

    for(int i=0;i<=N;i++){
        for(int j=0;j<bank.size();j++){
            if(i+bank[j]<=N){
                dp[i+bank[j]] = min(dp[i+bank[j]],dp[i]+1);
            }
        }
    }

    cout << dp[N] << endl;
}