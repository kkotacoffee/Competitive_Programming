#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,back=0,front=1,ans=1;
    cin >> N;
    vector<int> A(N);

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    map<int,int> mp;

    mp[A[0]]++;

    while(front!=N){

        if(front==back){
            mp[A[front]]++;
            front++;
        }else if(1==mp[A[front]]){
            mp[A[back]]--;
            back++;
        }else{
            mp[A[front]]++;
            front++;
            ans = max(ans,front-back);
        }
    }

    cout << ans << endl;
}