#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long int ans=0;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=1;i<N-1;i++){
        long long int ii=0,kk=0;
        for(int j=0;j<N;j++){
            if(A[j]<A[i] && j<i){
                ii++;
            }else if(A[j]<A[i] && i<j){
                kk++;
            }
        }
        ans += ii*kk;
    }

    cout << ans << endl;
}