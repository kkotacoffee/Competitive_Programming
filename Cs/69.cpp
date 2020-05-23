#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,a,four=0,two=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> a;
        if(a%4 == 0){
            four++;
        }else if(a%2 == 0){
            two++;
        }
    }

    if(two==0){
        if(N-four<=four+1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        if(N-two-four<=four){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}