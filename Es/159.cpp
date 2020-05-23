#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W,K,ans=1e9;
    cin >> H >> W >> K;
    vector<string> S(H);
    for(int i=0;i<H;i++){
        cin >> S[i];
    }

    for(int i=0;i<pow(2,H-1);i++){

        int tmp=0,now=0;
        vector<int> sum(H,0),num(H);
        num[0] = 0;

        for(int j=0;j<H-1;j++){
            if( (i>>j & 1) == 1){
                tmp++;
                now++;
            }
            num[j+1] = now;
            //cout << num[j+1] << endl;
        }

        for(int j=0;j<W;j++){
            vector<int> one(now+1,0);

            for(int k=0;k<H;k++){
                if(S[k][j]=='1'){
                    sum[num[k]]++;
                    one[num[k]]++;
                }
            }

            bool div = false,out=false;

            for(int k=0;k<=now;k++){
                if(K<one[k]){
                    out = true;
                    break;
                }
            }

            if(out){
                tmp = 1e9;
                break;
            }

            for(int k=0;k<=now;k++){
                if(K<sum[k]){
                    tmp++;
                    div = true;
                    break;
                }
            }

            if(div){
                for(int k=0;k<=now;k++){
                    sum[k] = one[k];
                }
            }

        }

        ans = min(tmp,ans);
    }

    cout << ans <<endl;
}