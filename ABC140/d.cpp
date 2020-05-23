#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K,ans=0,now=1,l=0,r=0;
    string S;   
    cin >> N >> K;
    cin >> S;
    S += 'A';
    vector<int> L;
    vector<int> R;

    for(int i=0;i<N;i++){
        while(S[i] == S[i+1] && i!=N){
            now++;
            i++;
        }
        if(S[i] == 'L'){
            L.push_back(now);
            now=1;
        }else{
            R.push_back(now);
            now=1;
        }
    }

    sort(L.begin(),L.end());
    sort(R.begin(),R.end());

    for(int i=0;i<K;i++){
        if(L[L.size()-l-1]<=R[R.size()-r-1]){
            ans += R[R.size()-r-1];
            r++;
        }else{
            ans += L[L.size()-l-1];
            l++;
        }
        
    }

    if(ans == N){
        ans--;
    }

    cout << ans << endl;
}