#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N;
    cin >> N;
    vector<string> S(N);
    map<string,int> mp;
    for(int i=0;i<N;i++){
        cin >> S[i];
        mp[S[i]]++;
    }

    cout << mp.size() << endl;


}