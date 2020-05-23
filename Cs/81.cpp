#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,ans=0;
    cin >> N >> K;
    vector<int> A(N,0);
    ans = N;
    if(N<=K){
        cout << "0" << endl;
    }else{
        for(int i=0;i<N;i++){
            int a;
            cin >> a;
            a--;
            A[a]++;
        }

        sort(A.begin(),A.end());

        for(int i=0;i<K;i++){
            ans -= A[N-1-i];
        }

        cout << ans << endl;
    }
}