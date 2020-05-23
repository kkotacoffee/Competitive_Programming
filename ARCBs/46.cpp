#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,A,B;
    cin >> N;
    cin >> A >> B;
    
    if(N<=A){
        cout << "Takahashi" << endl;
    }else{
        if(A==B){
            if(N%(A+1)==0){
                cout << "Aoki" << endl;
            }else{
                cout << "Takahashi" << endl;
            }
        }else{
            if(B<=A){
                cout << "Takahashi" << endl;
            }else{
                cout << "Aoki" << endl;
            }
        }
    }
}