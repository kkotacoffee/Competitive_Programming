#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,M,ans,sm=0;
    cin >> N >> M;
    vector<long long int> sum(M+1,0);
    for(int i=0;i<N;i++){
        int l,r,s;
        cin >> l >> r >> s;
        l--;
        r--;
        sum[l] += s;
        sum[r+1] -= s;
        sm += s;
    }

    ans = sum[0];

    for(int i=1;i<M;i++){
        sum[i] += sum[i-1];
        if(sum[i]<ans){
            ans = sum[i];
        }
    }

    cout << sm-ans << endl;
}