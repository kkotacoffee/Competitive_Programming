#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M,num=0;
    long long int ans=0;
    cin >> N >> M;
    vector<pair<int,int>> ab(N);
    for(int i=0;i<N;i++){
        cin >> ab[i].first >> ab[i].second;  
    }

    sort(ab.begin(),ab.end());

    for(int i=0;i<M;i++){
        ans += ab[num].first;
        ab[num].second--;
        if(ab[num].second==0){
            num++;
        }
    }

    cout << ans << endl;
}