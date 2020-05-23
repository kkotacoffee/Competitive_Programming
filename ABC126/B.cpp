#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a;
    b=(a/100);
    c=a-(b*100);
    if(0<b&&b<13){
        if(0<c&&c<13){
        printf("AMBIGUOUS");
        }else{
            printf("MMYY");
        }
    }
    if(b<0||12<b){
        if(0<c&&c<13){
        printf("YYMM");
        }else{
            printf("NA");
        }
    }

}