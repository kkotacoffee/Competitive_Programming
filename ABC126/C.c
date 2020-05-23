#include <stdio.h>
#include <math.h>

int main(){
    int n,k,b,c;
    float sum= 0.00000000000;
    scanf("%f %f",&n,&k);
    for(float i=1.0000000000;i<n+1.0000000000;i++){
        c=i;
        while(c<(k/i)){
            c=c*2.00000000000;
        }
        sum= sum + (1/n)/c;
        }
        printf("%.10f",(1/n));
    printf("%.10f",sum);
    return 0;
}