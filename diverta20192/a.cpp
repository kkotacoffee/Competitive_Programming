#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int N,cgcx,cgcy,gcx,gcy,fin=1,a=1;
    cin >> N;
    vector<int> x(N),y(N),coll(N);
    for(int i=0;i<N;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<N-1;i++){
        for(int n=i+1;n<N;n++){
        int sum=1;
         int cgcx = x[n]-x[i];
            int cgcy = y[n]-y[i];
            cgcx = gcx/gcd(cgcx,cgcy);
            cgcy = gcx/gcd(cgcx,cgcy);

        for(int j=n+1;j<N;j++){
            int gcx = (x[j]-x[i]);
            int gcy = (y[j]-y[i]);
            gcx = gcx/gcd(gcx,gcy);
            gcy = gcx/gcd(gcx,gcy); 
            if(gcx==cgcx&&gcy==cgcy){
                sum++;
            }
        }
        if(fin<sum){
            fin = sum;
        }
        }
    }
    cout << fin << endl;
    return 0;
}