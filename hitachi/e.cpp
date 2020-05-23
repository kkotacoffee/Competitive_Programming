#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    for(int i=0;i<pow(2,N)-1;i++){
        for(int j=0;j<pow(2,M)-1;j++){
            if(N==1 || M==1){
                cout << 1;
            }else{
                cout << 0;
            }
        }
        cout << endl;
    }
}
