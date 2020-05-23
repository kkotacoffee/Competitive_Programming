#include <bits/stdc++.h>

using namespace std;

bool sosuu(int x){
    for(int i=2;i<=pow(x,0.5);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;

    cin >> N;
    for(int i=0;i<N;i++){

        int ans = 0,now = 0,a,b;
        queue<pair<int,int>> Q;
        pair<int,int> p;
        cin >> a >> b;

        Q.emplace(a,0);

        while(1){
            p = Q.front();
            if(p.first == b){
                ans = p.second;
                break;
            }
            Q.pop();
            for(int j=0;j<10;j++){
                if(sosuu(p.first-(p.first%10)+j)){
                    Q.emplace(p.first-(p.first%10)+j,p.second+1);
                }
                if(sosuu(p.first-p.first%100+p.first%10+j*10)){
                    Q.emplace(p.first-p.first%100+p.first%10+j*10,p.second+1);
                }
                if(sosuu(p.first-p.first%1000+p.first%100+j*100)){
                    Q.emplace(p.first-p.first%1000+p.first%100+j*100,p.second+1);
                }
                if(sosuu(p.first-(p.first/1000)*1000+j*1000)){
                    Q.emplace(p.first-(p.first/1000)*1000+j*1000,p.second+1);
                }
            }
        }

        cout << ans << endl;
    }
}