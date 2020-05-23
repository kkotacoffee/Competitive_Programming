#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a<=5){
        printf("0\n");
    }else if(13<=a){
        printf("%d\n",b);
    }else{
        printf("%d\n",b/2);
    }
    return 0;
}