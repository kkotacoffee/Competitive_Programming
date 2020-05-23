#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,Q;
    bool zero=false;
    cin >> N;
    vector<long long int> s(N),border(N+1);
    for(int i=0;i<N;i++){
        cin >> s[i];
    }

    sort(s.begin(),s.end());

    for(int i=0;i<=N;i++){
        if(zero || i==N){
            border[i] = 0;
        }else if(s[N-1-i]==0){
            border[i] = 0;
            zero = true;
        }else{
            border[i] = s[N-1-i]+1;
        }
    }

    cin >> Q;

    for(int i=0;i<Q;i++){
        long long int k;
        cin >> k;
        cout << border[k] << endl;
    }
}