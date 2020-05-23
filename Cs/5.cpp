#include <bits/stdc++.h>

using namespace std;

int main(){
    int T,N,M;
    cin >> T >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    cin >> M;
    vector<int> B(M);
    for(int i=0;i<M;i++){
        cin >> B[i];
    }
    int a=0,b=0;

    while(a!=N && b!=M){
        if(A[a]<=B[b] && B[b]<=A[a]+T){
            a++;
            b++;
        }else{
            a++;
        }
    }

    if(b==M){
        cout <<"yes" << endl;
    }else{
        cout << "no" << endl;
    }
}