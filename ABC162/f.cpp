#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,even=0,odd=0,ans;
    cin >> N;
    
    vector<long long int> A(N),evensum(N/2 + 1),oddsum(N/2 + 1);
    for(int i=0;i<N;i++){
        cin >> A[i];
        if(i%2==0){
            if(i==0){
                evensum[i] = A[i];
            }else{
                evensum[i/2] = evensum[i/2 - 1] + A[i];
            }
            even += A[i];
        }else{
            if(i==1){
                oddsum[i/2] = A[i];
            }else{
                oddsum[i/2] = oddsum[i/2 - 1] + A[i];
            }
            odd += A[i];
        }
    }
    cout << odd;

    for(int i=0;i<N/2;i++){
        cout << evensum[i] << " " << odd+oddsum[i] << endl;
    }

    if(N%2==0){
        cout << max(even,odd) << endl;
    }else{
        ans = odd;

        for(int i=0;i<N;i+=2){
            ans = max(ans,even-A[i]);
        }

        for(int i=0;i<=N/2;i++){
            ans = max(ans,evensum[i]+odd-oddsum[i]);
        }
        cout << ans << endl;
    }
}