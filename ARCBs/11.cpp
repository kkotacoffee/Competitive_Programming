#include <bits/stdc++.h>

using namespace std;

char alphas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char alphab[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main(){
    int N;
    cin >> N;
    vector<string> w(N),put(N,"");
    for(int i=0;i<N;i++){
        cin >> w[i];
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<w[i].size();j++){
            for(int k=0;k<26;k++){
                if(w[i][j]==alphab[k]){
                    w[i][j] = alphas[k];
                }
            }
            if(w[i][j]=='b' || w[i][j]=='c'){
                put[i] +='1';
            }else if(w[i][j]=='d' || w[i][j]=='w'){
                put[i] +='2';
            }else if(w[i][j]=='t' || w[i][j]=='j'){
                put[i] +='3';
            }else if(w[i][j]=='f' || w[i][j]=='q'){
                put[i] +='4';
            }else if(w[i][j]=='l' || w[i][j]=='v'){
                put[i] +='5';
            }else if(w[i][j]=='s' || w[i][j]=='x'){
                put[i] +='6';
            }else if(w[i][j]=='p' || w[i][j]=='m'){
                put[i] +='7';
            }else if(w[i][j]=='h' || w[i][j]=='k'){
                put[i] +='8';
            }else if(w[i][j]=='n' || w[i][j]=='g'){
                put[i] +='9';
            }else if(w[i][j]=='z' || w[i][j]=='r'){
                put[i] +='0';
            }
        }
    }

    bool first = true;

    for(int i=0;i<N;i++){
        if(put[i]!=""){
            if(first){
                cout << put[i];
                first = false;
            }else{
                cout << " " << put[i];
            }
        }
    }

    cout << endl;
}