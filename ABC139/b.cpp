#include <bits/stdc++.h>

using namespace std;

int main(){
    int A,B,i=1;
    cin >> A >> B;
    
    if(B==1){
        cout << "0" << endl;
    }else if(B<=A){
        cout << "1" << endl;
    }else{
        while(A+i*(A-1)<B){
            i++;
        }
        cout << 1+i << endl;
    }
}