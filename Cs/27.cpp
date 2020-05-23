#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,c=0;
    cin >> N;

    if(N==1){
        cout << "Aoki" << endl;
    }else if (N==2 || N == 3){
        cout << "Takahashi" << endl;
    }else{
        while(N!=2){
            N /= 2;
            N++;
            c++;
        }

        if(c%2==0){
            cout << "Takahashi" << endl;
        }else{
            cout << "Aoki" << endl;
        }
    }
}