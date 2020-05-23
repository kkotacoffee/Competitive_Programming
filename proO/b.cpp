#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,now=0,j=1,ans=1,gou=1;
    bool flag = true;

    cin >> N;

    vector<int> D(N);
    vector<int> sum(N,0);

    for(int i=0;i<N;i++){
        cin >> D[i];
    }

    if(D[0]!=0){
        flag = false;
    }

    sort(D.begin(),D.end());

    if(D[1]==0){
        flag = false;
    }

    while(j!=N){
        if(D[j]==now){
            sum[now]++;
            j++;
        }else{
            now = D[j];
        }
    }
    
    if(D[N-1]!=1){

    for(int i=1;i<N-1;i++){
        if(sum[i+1]==0 || sum[i]==0){
            flag = false;
            break;
        }
    for(int ff=0;ff<sum[i+1];ff++){
        ans %= 998244353;
        ans *= sum[i];
        ans %= 998244353;
    }
        gou+= sum[i];
        if((gou+sum[i+1])==N){
            break;
        }
    }
    }

    if(!flag){
        cout << 0 << endl;
    }else if(D[N-1]==1 || N == 1){
        cout << 1 << endl;
    }else{
        cout << ans << endl;
    }
}
