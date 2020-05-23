#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a<=0 && 0<=b){
        cout << "Zero";
    }else if(a<0&&(b-a)%2==0){
        cout << "Negative";
    }else{
        cout << "Positive";
    }
}