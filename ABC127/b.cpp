#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=0;i<10;i++){
        d=a*c-b;
        printf("%d\n",d);
        c=d;
    }
    return 0;
}