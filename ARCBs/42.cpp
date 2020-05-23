#include <bits/stdc++.h>

using namespace std;

int main(){
    double X,Y,ans=1e9,tmp;
    cin >> X >> Y;
    int N;
    cin >> N;
    vector<double> x(N),y(N),a(N),b(N),c(N);
    for(int i=0;i<N;i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0;i<N;i++){
        int j;

        if(i==N-1){
            j = 0;
        }else{
            j = i+1;
        }

        if(x[i]==x[j]){
            a[i] = 1;
            b[i] = 0;
            c[i] = -x[i];
        }else if(y[i]==y[j]){
            a[i] = 0;
            b[i] = 1;
            c[i] = -y[i];
        }else{
            a[i] = y[j]-y[i];
            b[i] = x[i]-x[j];
            c[i] = y[i]*(x[j]-x[i])-x[i]*(y[j]-y[i]);
        }
    }

    for(int i=0;i<N;i++){
        tmp = abs(a[i]*X+b[i]*Y+c[i])/sqrt(a[i]*a[i]+b[i]*b[i]);
        ans = min(tmp,ans);
    }

    cout << setprecision(20) << ans << endl;
}