#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,K,sum=0;
    cin >> N >> K;
    pair<int,int> ab;
    vector<pair<int,int>> vec(N);
    for(int i=0;i<N;i++){
        cin >> ab.first >> ab.second;
        vec[i] = ab;
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<N;i++){
        sum += vec[i].second;
        if(K<=sum){
            cout << vec[i].first << endl;
            break;
        }
    }
}