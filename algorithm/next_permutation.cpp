#include <bits/stdc++.h>

using namespace std;

int perm[10];

int main(){

    for(int i=0;i<10;i++){
        perm[i] = i;
    }

    do{
        for(int i=0;i<10;i++){
            cout << perm[i];
        }
        cout << "\n";
    }while(next_permutation(perm,perm+10));

    return 0;

}