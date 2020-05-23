#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,ans=0,solve=1;
    cin >> N;
    vector<long long int> T(N),sum(N),num(10001,0);
    for(int i=0;i<N;i++){
        cin >> T[i];
        num[T[i]]++;
    }

    sort(T.begin(),T.end());

    for(int i=0;i<N;i++){
        if(i==0){
            sum[0] = T[0];
            ans += sum[i];
        }else{
            sum[i] = sum[i-1] + T[i];
            ans += sum[i];
        }
    }

    cout << ans << endl;

    for(int i=0;i<=10000;i++){
        if(num[i]<2){
            continue;
        }else{
            for(int j=num[i];1<j;j--){
                solve *= j;
                solve %= 1000000007;
            }
        }
    }

    cout << solve << endl;
}