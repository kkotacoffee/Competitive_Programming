#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,x,bk=0;
    cin >> N >> M;
    vector<int> a(M),sum(N+1);
    sum[0] = 1;
    sum[1] = 1;
    for(int i=0;i<M;i++){
        cin >> x;
        a[i] = x;
    }

    if(M!=0){
        if(a[0]==1){
            sum[1] = 0;
            bk++;
        }
    }

    for(int i=2;i<N+1;i++){
        if(M!=0){
            if(i == a[bk]){
                sum[i] = 0;
                bk++;
                if(bk==M){
                    bk--;
                }
            }else{
            sum[i] = sum[i-2]+sum[i-1];
            sum[i] %= 1000000007;
            }
        }else{
            sum[i] = sum[i-2]+sum[i-1];
            sum[i] %= 1000000007;
        }
    }
    cout << sum[N] << endl;
}