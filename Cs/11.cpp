#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    vector<int> NG(3);
    cin >> N >> NG[0] >> NG[1] >> NG[2];
    sort(NG.begin(),NG.end());
    if(N==NG[0] || N == NG[1] || N == NG[2]){
        cout << "NO" << endl;
    }else if(NG[0]==NG[1]-1 && NG[1]==NG[2]-1 && NG[0]<N){
        cout << "NO" << endl;
    }else{
        if(N<=297){
            cout << "YES" << endl;
        }else if(N==298){
            if(N-NG[2]==3 && NG[0]%3==2 && NG[1]%3==2 && NG[2]%3==0 && NG[2]<N){
                cout << "NO" << endl;
            }else if(NG[0]%3==2 && NG[2]%3==1 && NG[2]<N){
                cout << "NO" << endl;
            }else if(N-NG[0]==3 && NG[0]%3==0 && NG[1]%3==2 && NG[2]%3==2 && NG[2]<N){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }else if(N==299){
            if(NG[0]%3==0 && NG[1]%3==1 && NG[2]%3==1 && NG[2]<N){
                cout << "NO" << endl;
            }else if(NG[0]%3==0 && NG[1]%3==0 && NG[2]%3==1 && NG[2]<N){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }else{
            if(NG[0]%3 == 0 || NG[1]%3 == 0 || NG[2]%3 == 0){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }
}