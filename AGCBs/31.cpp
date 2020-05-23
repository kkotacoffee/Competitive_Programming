#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=1;
    cin >> N;
    vector<long long int> C(N);
    map<long long int,long long int> mp;
    for(int i=0;i<N;i++){
        cin >> C[i];
        mp[C[i]]++;
    }

    for(int i=1;i<N;i++){
        if(C[i]==C[i-1]){
            mp[C[i]]--;
        }
    }

    for(auto itr=mp.begin(); itr!=mp.end();itr++){
        ans += (itr->second)*(itr->second-1)/2;
    }

    cout << ans << endl;
}