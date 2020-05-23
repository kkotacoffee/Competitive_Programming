#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,ans=0;
    vector<long long int> anss(400);
    cin >> N;
    for(long long int i=max((long long int)0,N-200);i<N+200;i++){
        long long int sum = i;
        string S = to_string(i);
        for(int j=0;j<S.size();j++){
            sum += S[j]-'0';
        }

        if(sum == N){
            anss[ans]=i;
            ans++;
        }
    }

    cout << ans << endl;

    for(int i=0;i<ans;i++){
        cout << anss[i] << endl;
    }
}