#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,x,ans=0;
    vector<int> a(9,0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> x;
        for(int j=0;j<9;j++){
            if(j==8){
                if(j*400<=x){
                a[j]++;
                }
            }else{
                if(j*400<=x && x<400*(j+1)){
                a[j]++;
                }
            }
        }
    }

    for(int i=0;i<8;i++){
        if(0<a[i]){
            ans++;
        }
    }

    cout << max(ans,1) << ' ' <<  ans + a[8] << endl;
}