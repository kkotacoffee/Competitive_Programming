#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,A,B,C,D,ren=0,sharp=0,cant=0,over=0;
    string S;
    cin >> N >> A >> B >> C >> D;
    cin >> S;

    for(int i=A;i<=max(C,D);i++){
            if(S[i] == '#'){
                sharp++;
            }else{
                cant = max(cant,sharp);
                sharp = 0;
            }
        }
        cant = max(cant,sharp);

    if(C<D){

        if(1<cant){
            cout << "No";
        }else{
            cout << "Yes";
        }

    }else{
        for(int i=B-2;i<=D;i++){
            if(S[i] == '#'){
                over = max(ren,over);
                ren = 0;
            }else{
                ren++;
            }
        }
        over = max(ren,over);
        if(1<cant || over<3){
            cout << "No";
        }else{
            cout << "Yes";
        }
    }
}