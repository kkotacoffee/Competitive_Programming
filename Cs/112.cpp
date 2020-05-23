#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    bool mx = false;
    cin >> N;
    vector<long long int> x(N),y(N),h(N),cal(N);
    for(int i=0;i<N;i++){
        cin >> x[i] >> y[i] >> h[i];
        if(h[i]==0){
            mx = true;
        }
    }

    if(mx){
        for(int i=0;i<=100;i++){
            for(int j=0;j<=100;j++){
                for(int k=0;k<=200;k++){
                   for(int l=0;l<N;l++){
                        if(h[l]!=max((long long int)0,k-abs(x[l]-i)-abs(y[l]-j))){
                           break;
                        }
                        if(l==N-1){
                            cout << i << " " << j << " " << k << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }else{
        for(int i=0;i<=100;i++){
            for(int j=0;j<=100;j++){
                for(int k=0;k<N;k++){
                    cal[k] = h[k]+abs(x[k]-i)+abs(y[k]-j);
                }
                sort(cal.begin(),cal.end());
                if(0<cal[0] && cal[0]==cal[N-1]){
                    cout << i << " " << j << " " <<  cal[0] << endl;
                    return 0;
                }
            }
        }
    }
}