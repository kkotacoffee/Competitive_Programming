#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long int>v(N); 
    unordered_map<long long int,long long int> mp;
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        v[i] = a;
        mp[a] = i;
    }


    sort(v.begin(),v.end());

    for(int i=N-1;0<=i;i--){
        cout << mp[v[i]]+1 << endl;
    }

}