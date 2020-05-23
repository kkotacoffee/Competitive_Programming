#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,ans=1000000000;
    cin >> N >> K;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());

    for(int i=0;i<N-K+1;i++){
        ans = min(ans,vec[i+K-1]-vec[i]);
    }

    cout << ans << endl;
}