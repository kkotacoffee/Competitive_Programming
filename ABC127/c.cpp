#include <iostream>

using namespace std;

int main(){
    int n,m,x,i=0;
    int lmax=1,rlow=100000;
    scanf("%d %d",&n,&m);
    x=m;
    for(int i=0;i<x;i++){
        int l,r;
        cin >> l >> r;
        if(lmax<l){
            lmax=l;
        }
        if(r<rlow){
            rlow=r;
        }
    }
    if((rlow-lmax)<0){
        printf("0\n");
    }else{
    printf("%d\n",rlow-lmax+1);
    }
    return 0;
}