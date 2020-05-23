#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,ans=0;
    cin >> N;
    vector<long long int> A(N);
    map<long long int,long long int> tas,hiku;
    for(int i=0;i<N;i++){
        cin >> A[i];
        hiku[i+1-A[i]]++;
    }

    for(int i=0;i<N;i++){
        hiku[i+1-A[i]]--;
        ans += hiku[A[i]+i+1];
    }

    cout << ans << endl;
}