#include <bits/stdc++.h>

using namespace std;

char alphas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


int main(){
    char x;
    cin >> x;
    for(int i=0;;i++){
        if(alphas[i]==x){
            cout << alphas[i+1] << endl;
            break;
        }
    }
}