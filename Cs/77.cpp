#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,now;
    cin >> N;
    now = N-1;
    long long int ans=0,add=0;
    vector<long long int> A(N),B(N),b(N,N),C(N),c(N);

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N;i++){
        cin >> B[i];
    }

    for(int i=0;i<N;i++){
        cin >> C[i];
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());

    for(int i=N-1;0<=i;i--){
        if(B[now]>=C[i]){
            b[now]=N-1-i;
            now--;
            i++;
            if(now==-1){
                break;
            }
        }
    }

    now=N-1;

    for(int i=N-1;0<=i;i--){
        if(A[now]>=B[i]){
            now--;
            i++;
            if(now==-1){
                break;
            }
        }else{
            ans += (b[i]*(now+1));
        }
    }

    cout << ans << endl;
}