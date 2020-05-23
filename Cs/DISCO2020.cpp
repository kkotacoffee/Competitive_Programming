#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W,K,now=1,sub=0;
    cin >> H >> W >> K;
    vector<string> s(H);
    for(int i=0;i<H;i++){
        cin >> s[i];
    }
    int ans[H][W],none[H]={0};

    for(int i=0;i<H;i++){
        bool exist = false;
        for(int j=0;j<W;j++){
            if(s[i][j]=='#'){
                if(exist){
                    now++;
                }
                exist = true;
            }
            ans[i][j] = now;
        }
        now++;

        if(!exist){
            none[i] = 1;
            sub++;
            now--;
        }
    }

    bool first = true;

    for(int i=0;i<H;i++){
        if(none[i]==0){
            if(first){
                for(int j=i-1;0<=j;j--){
                    for(int k=0;k<W;k++){
                        ans[j][k] = ans[i][k];
                    }
                }
                first = false;
            }

            for(int j=i+1;j<H;j++){
                if(none[j]==0){
                    break;
                }
                for(int k=0;k<W;k++){
                    ans[j][k] = ans[i][k];
                }
            }
        }
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}