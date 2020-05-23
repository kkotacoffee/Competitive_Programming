#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,R,S,P;
    long long int ans=0;
    string T;
    cin >> N >> K;
    cin >> R >> S >> P;
    cin >> T;

    for(int i=0;i<K;i++){
        int cnt=0;
        long long int sum[2][3]={{0,0,0},{0,0,0}};
        for(int j=i;j<=N;j+=K){
            if(cnt==0){
                if(T[j]=='s'){
                sum[0][0] = R;
                }else if(T[j]=='r'){
                    sum[0][1] = P;
                }else{
                    sum[0][2] = S;
                }
            }else{
                if(T[j]=='s'){
                sum[cnt%2][0] = max(sum[cnt%2][0]+R,R+max(sum[(1+cnt)%2][1],sum[(1+cnt)%2][2]));
                }else if(T[j]=='r'){
                    sum[cnt%2][1] = max(sum[cnt%2][1]+P,P+max(sum[(1+cnt)%2][0],sum[(1+cnt)%2][2]));
                }else{
                    sum[cnt%2][2] = max(sum[cnt%2][2]+S,S+max(sum[(1+cnt)%2][0],sum[(1+cnt)%2][1]));
                }
            }
            cnt++;
        }
        //cout << sum[0] << sum[1] << sum[2];
        ans += max({sum[0][0],sum[0][1],sum[0][2],sum[1][0],sum[1][1],sum[1][2]});
    }

    cout << ans << endl;
}