#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int K;
    queue<string> Q;
    Q.push("1");
    Q.push("2");
    Q.push("3");
    Q.push("4");
    Q.push("5");
    Q.push("6");
    Q.push("7");
    Q.push("8");
    Q.push("9");

    cin >> K;
    K--;
    
    while(0!=K){
        string now = Q.front();
        Q.pop();
        for(int i=0;i<10;i++){
            char add = i+'0';
            if(abs(now.back()-'0'-i)<=1){
                Q.push(now+add);
            }
        }
        K--;
    }

    cout << Q.front() << endl;
}