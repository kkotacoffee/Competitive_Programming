#include <bits/stdc++.h>

using namespace std;

long long int len[2001][2001];

int main(){
    long long int N,ans=0;
    cin >> N;
    vector<long long int> x(N);

    for(int i=0;i<N;i++){
        cin >> x[i];
    }

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            ans += ((j-i)*(j-i))*(x[j]-x[i]);
            ans %= 1000000007;
        }
    }
}