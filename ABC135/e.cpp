#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int K;
    int  X,Y,count=0;
    cin >> K;
    cin >> X >> Y;
    int goal = X+Y;
    int move = K%2;
    if((X+Y)<K){
        if(move==1&&(K-start)%2==0){
            count = (K-start)/K + 1;
        }
        for(int i=0;i<count;i++){

        }
    }else if(K<goal{
        int add = goal%K;
        count = goal/K +1;
        for(int i=0;i<count;i++){
            
        }
    }

  if(K%2==0 && (X+Y)%2=1){
        cout << "-1" << endl;
    }else if(X+Y==K){
        cout << "1" << endl;
        cout << X << Y << endl;
    }