#include <bits/stdc++.h>

using namespace std;

bool cross(int x1,int x2,int x3,int x4,int y1, int y2, int y3, int y4){
    int ta = (x3-x4)*(y1-y3) + (y3-y4)*(x3-x1);
    int tb = (x3-x4)*(y2-y3) + (y3-y4)*(x3-x2);
    int tc = (x1-x2)*(y3-y1) + (y1-y2)*(x1-x3);
    int td = (x1-x2)*(y4-y1) + (y1-y2)*(x1-x4);

    if(ta*tb<0 && tc*td<0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int Ax,Ay,Bx,By,N,ans=0;
    cin >> Ax >> Ay >> Bx >> By;
    cin >> N;

    vector<int> X(N),Y(N);

    for(int i=0;i<N;i++){
        cin >> X[i] >> Y[i];
    }

    for(int i=0;i<N;i++){
        if(i==0){
            if(cross(Ax,Bx,X.back(),X[0],Ay,By,Y.back(),Y[0])){
                ans++;
            }
        }else{
            if(cross(Ax,Bx,X[i-1],X[i],Ay,By,Y[i-1],Y[i])){
                ans++;
            }
        }
    }

    cout << 1+ans/2 << endl;
}