#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long int ans=0;
    unordered_map<string,int> mp;
    string str;
    vector<string> vec;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> str;
        sort(str.begin(),str.end());
        if(mp[str]!=0){
            ans += mp[str];
            mp[str]++;
        }else{
            mp[str] = 1;
        }
    }

    cout << ans;
}