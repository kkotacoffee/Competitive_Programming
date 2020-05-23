#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W;
    bool flag = true;
    cin >> H >> W;
    vector<string> s(H+2);
    for(int i=1;i<=H;i++){
        cin >> s[i];
        s[i] = '.' + s[i];
        s[i] = s[i] + '.';
    }
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            if(s[i][j] == '#'){
                if(s[i+1][j] != '#' && s[i][j+1] != '#' && s[i-1][j] != '#' && s[i][j-1] != '#'){
                    flag = false;
                    break;
                }
            }
        }

        if(!flag){
            break;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}