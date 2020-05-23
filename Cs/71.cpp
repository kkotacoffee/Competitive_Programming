#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,A,sz;
    vector<long long int> vec;
    cin >> N;
    unordered_map<int,int> mp;
    for(int i=0;i<N;i++){
        cin >> A;
        if(mp[A]==0){
            mp[A] =1;
        }else{
            vec.push_back(A);
            mp[A] = 0;
        }
    }

    sz = vec.size();

    if(sz<2){
        cout << "0" << endl;
    }else{
        sort(vec.begin(),vec.end());
        cout << vec[sz-1]*vec[sz-2] << endl;
    }
}