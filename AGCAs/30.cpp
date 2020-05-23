#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int A,B,C,ans=0;
    cin >> A >> B >> C;

    if(C<=A+B){
        cout << B + C << endl;
    }else{
        cout << B + min(C,(A+B)+1) << endl;
    }
}