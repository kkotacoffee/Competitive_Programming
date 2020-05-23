#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> X(N),Y(N);
    for(int i=0;i<N;i++){
        cin >> X[i];
    }

    Y = X;

    sort(X.begin(),X.end());

    for(int i=0;i<N;i++){
        if(Y[i]<=X[N/2 -1]){
            cout << X[N/2];
        }else{
            cout << X[N/2 -1];
        }
        cout << endl;
    }
}