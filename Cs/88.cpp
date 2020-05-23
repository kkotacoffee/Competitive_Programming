#include <bits/stdc++.h>

using namespace std;

int main(){
    int c[3][3];
    bool ans = true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> c[i][j];
        }
    }

    for(int i=1;i<3;i++){
        for(int j=1;j<3;j++){
            if(c[i][j] != c[i-1][j] + c[i][j-1] - c[i-1][j-1]){
                ans = false;
                break;
            }
        }
        if(!ans){
            break;
        }
    }

    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}