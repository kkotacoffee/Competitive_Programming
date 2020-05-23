#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,Y;
    bool flag = false;
    cin >> N >> Y;
    for(int i=0;i<=2000;i++){
        for(int j=0;j<=2000;j++){
            if(i+j<=N && 10000*i+5000*j+(N-i-j)*1000 == Y){
                flag = true;
                cout << i << " " << j << " " << N-i-j << endl;
                break;
            }
        }
        if(flag){
            break;
        }
    }

    if(! flag){
        cout << "-1 -1 -1" << endl;
    }
}