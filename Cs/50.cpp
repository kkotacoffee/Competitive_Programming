#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N,ans=2;
    bool flag = true;
    cin >> N;
    vector<int> A(N/2 +1,0);

    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        if(N%2==0){
            if(a%2==0){
                flag = false;
            }
        }else{
            if(a%2==1){
                flag = false;
            }
        }

        A[a/2]++;
    }

    if(N%2==1){
        for(int i=1;i<N/2+1;i++){
            if(A[0]!=1 || A[i] != 2){
                flag = false;
            }
        }
    }else{
        for(int i=0;i<N/2;i++){
            if(A[i] != 2){
                flag = false;
            }
        }
    }

    for(int i=0;i<N/2-1;i++){
        ans *= 2;
        ans %= 1000000007;
    }

    if(flag && N==1){
        cout << "1" << endl;
    }else if(flag){
        cout << ans << endl;
    }else{
        cout << "0" << endl;
    }
}