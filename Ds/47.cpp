#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,T,mx=0,ans=0;
    cin >> N >> T;
    map<long long int,long long int> mp;
    vector<long long int> A(N),sale(N,0);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    sale[N-1] = A[N-1]

    for(int i=N-2;0<=i;i--){
        sale[i] = max(A[i],sale[i+1]);
    }

    for(int i=0;i<N;i++){
        mx = max(mx,sale[i]-)
    }
}