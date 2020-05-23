#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0;
    string S;
    cin >> N;
    vector<string> s(N);
    vector<int> t(N),sum(N);
    for(int i=0;i<N;i++){
        cin >> s[i] >> t[i];
        if(i==0){
            sum[i] = t[i];
        }else{
            sum[i] = sum[i-1] + t[i];
        }
    }

    cin >> S;

    for(int i=0;i<N;i++){
        if(S==s[i]){
            cout << sum[N-1]-sum[i] << endl;
            break;
        }
    }
}