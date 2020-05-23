#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<pair<int,int>> sc(M);

    if(M==0){
        if(N==1){
            cout << 0 << endl;
        }else{
            cout << pow(10,N-1) << endl;
        }
        return 0;
    }

    for(int i=0;i<M;i++){
        cin >> sc[i].first >> sc[i].second;

        if(sc[i].first==1 && sc[i].second==0 && N!=1){
            cout << -1 << endl;
            return 0;
        }
    }

    if(N==1){
        for(int i=pow(10,N-1)-1;i<pow(10,N);i++){
            string S = to_string(i);
            for(int j=0;j<M;j++){
                if(S[sc[j].first-1]-'0'!=sc[j].second){
                    break;
                }

                if(j==M-1){
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }else{
        for(int i=pow(10,N-1);i<pow(10,N);i++){
            string S = to_string(i);
            for(int j=0;j<M;j++){
                if(S[sc[j].first-1]-'0'!=sc[j].second){
                    break;
                }

                if(j==M-1){
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;
}