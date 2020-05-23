#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,max=0;
    cin >> N;
    vector<string> vec(N);
    map<string,int> mp;
    for(int i=0;i<N;i++){
        cin >> vec[i];
        mp[vec[i]]++;
    }

    for(int i=0;i<N;i++){
        if(max<mp[vec[i]]){
            max = mp[vec[i]];
        }
    }

    sort(vec.begin(),vec.end());

    for(int i=0;i<N;i++){
        if(mp[vec[i]]==max){
            cout << vec[i] << endl;
            i += max-1;
        }
    }
}