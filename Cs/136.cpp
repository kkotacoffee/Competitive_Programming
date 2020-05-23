#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    bool flag = true;
    cin >> N;
    vector<int> H(N);
    for(int i=0;i<N;i++){
        cin >> H[i];
    }

    for(int i=0;i<N-1;i++){
        if(H[i+1]==H[i]-1){
            H[i+1]++;
        }else if(H[i+1]<H[i]-1){
            flag = false;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}