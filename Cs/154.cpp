#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    sort(A.begin(),A.end());

    for(int i=0;i<N-1;i++){
        if(A[i]==A[i+1]){
            cout << "NO" << endl;
            break;
        }

        if(i==N-2){
            cout << "YES" << endl;
            break;
        }
    }
}