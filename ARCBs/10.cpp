#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,ans=0,tmp=0,ren=0;
    cin >> N;
    vector<int> rest(366,0);
    for(int i=0;i<366;i++){
        if(i%7==0 || i%7==6){
            rest[i]++;
        }
    }

    for(int i=0;i<N;i++){
        string md;
        cin >> md;
        int m,d;
        if(md.size()==5){
            m = 10*(md[0]-'0') + md[1]-'0';
            d = 10*(md[3]-'0') + md[4]-'0';
        }else if(md.size()==4){
            if(md[1]=='/'){
                m = md[0] - '0';
                d = 10*(md[2]-'0') + md[3]-'0';
            }else{
                m = 10*(md[0] -'0') + md[1] - '0';
                d = md[3]-'0';
            }
        }else{
            m = md[0] - '0';
            d = md[2] - '0';
        }

        if(m==1){
            rest[d-1]++;
        }else if(m==2){
            rest[31-1+d]++;
        }else if(m==3){
            rest[60-1+d]++;
        }else if(m==4){
            rest[91-1+d]++;
        }else if(m==5){
            rest[121-1+d]++;
        }else if(m==6){
            rest[152-1+d]++;
        }else if(m==7){
            rest[182-1+d]++;
        }else if(m==8){
            rest[213-1+d]++;
        }else if(m==9){
            rest[244-1+d]++;
        }else if(m==10){
            rest[274-1+d]++;
        }else if(m==11){
            rest[305-1+d]++;
        }else{
            rest[335-1+d]++;
        }
    }

    for(int i=0;i<366;i++){
        tmp += rest[i];
        ren++;
        tmp--;
        if(0<=tmp){
            ans = max(ans,ren);
        }else{
            ren = 0;
            tmp = 0;
        }
    }

    cout << ans << endl;
}