#include <stdio.h>
#include <math.h>
int a[6];

int flag(int b){
if(a[5]<b){
printf(":(");
return 0;
}
}

int main(){
  
    for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++){
        for(int n=i+1;n<5;n++){
            int c=a[n]-a[i];
            flag(c);
        }
    }
    printf("Yay!");
    return 0;
}