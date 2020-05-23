#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,in=0,out=0,cant=0;
    cin >> N;
    for(int i=0;i<N;i++){
        string S;
        cin >> S;
        int inn=0,outt=0;
        for(int j=0;j<S.size();j++){
            if(S[j]=='('){
                inn++;
                if(inn<=outt){
                    inn++;
                    outt++;
                }
            }else{
                if(inn==0){
                    outt++;
                }else{
                    inn--;
                }
            }
        }

        if(inn>0){
            cant++;
        }else if(outt>0){
            cant--;
        }

        in += inn;
        out += outt;
    }

    if(in == out && 0==cant){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
