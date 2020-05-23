#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    cin >> N;
    unordered_map<long long int, int> mp;
    for(int i=0;i<N;i++){
        int A;
        cin >> A;
        if(mp[A] == 0){
            mp[A] = 1;
            ans++; 
        }else{
            mp[A] = 0;
            ans--;
        }
    }

    cout << ans << endl;
}