#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,A,odd=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A;
        odd += A%2;
    }

    if(odd%2==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}