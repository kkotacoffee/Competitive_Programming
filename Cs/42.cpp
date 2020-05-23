#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,K;
    string num;
    bool flag = true;
    cin >> N >> K;
    vector<char> D(K);
    for(int i=0;i<K;i++){
        cin >> D[i];
    }

    for(int i=N;;i++){
        num =to_string(i);
        for(int i=0;i<num.size();i++){
            for(int j=0;j<K;j++){
                if(num[i] == D[j]){
                    flag = false;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            cout << i << endl;
            break;
        }
        flag = true;
    }
}