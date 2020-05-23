#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N;
    string s;
    char c;
    cin >> N;
    int a = N/5;
    a %= 6;
    if(5<=N){
        switch(a){
            case 0: s = "123456";
            break;
            case 1: s = "234561";
            break;
            case 2: s = "345612";
            break;
            case 3: s = "456123";
            break;
            case 4: s = "561234";
            break;
            case 5: s = "612345";
        }
    }else{
        s = "123456";
    }

    for(int i=0;i<(N-(5*(N/5)))%6;i++){
        c = s[i];
        s[i] = s[i+1];
        s[i+1] = c;
    }

    cout << s << endl;
}