#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,Q,ac=0;
    string S;
    cin >> N >> Q;
    cin >> S;
    vector<int> sum(S.size(),0);

    for(int i=0;i<S.size();i++){
        if(S[i]=='A' && S[i+1]=='C'){
            ac++;
            sum[i+1]--;
        }
    }

    sum[0] = ac;

    for(int i=1;i<S.size();i++){
        sum[i] += sum[i-1];
    }


    for(int i=0;i<Q;i++){
        int l,r;
        cin >> l >> r;
        cout << sum[l-1] - sum[r-1] << endl;
    }
}