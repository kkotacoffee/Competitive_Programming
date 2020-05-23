#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=1;
    bool up;
    cin >> N;
    vector<long long int> R(N);
    for(int i=0;i<N;i++){
        cin >> R[i];
    }

    for(int i=0;i<N-1;i++){
        if(R[i]!=R[i+1]){
            if(R[i]<R[i+1]){
                up = false;
            }else{
                up = true;
            }
            break;
        }

        if(i==N-2){
            cout << 0 << endl;
            return 0;
        }
    }

    for(int i=0;i<N-1;i++){
        if(R[i]!=R[i+1]){
            if(R[i]<R[i+1]){
                if(!up){
                    ans++;
                    up = true;
                }
            }else if(R[i]>R[i+1]){
                if(up){
                    ans++;
                    up = false;
                }
            }
        }
    }

    if(ans<3){
        cout << 0 << endl;
    }else{
        cout << ans << endl;
    }
}