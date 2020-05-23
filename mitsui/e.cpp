#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N;
    long long int ans=1;
    int zero=0;
    cin >> N;
    vector<int> A(N),sum(N,0);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N;i++){
        sum[A[i]]++;
        if(sum[A[i]]!=3){
            ans *= (3-sum[A[i]]);
            if(A[i]!=0){
                ans *= sum[A[i]-1];
            }
            ans %= 1000000007;
        }
            //ans *= sum[A[i]-1];
            //sum[A[i]-1]--;
        ans %= 1000000007;
    }

    cout << ans << endl;
}